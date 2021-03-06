from flask import Flask
from flask_sqlalchemy import SQLAlchemy
from flask_login import LoginManager
import os

db = SQLAlchemy()
login = LoginManager()
login.login_view = "routes.login"

def create_app():
    app = Flask(__name__, static_url_path="", static_folder="static")
    app.config['SQLALCHEMY_DATABASE_URI']="mysql+pymysql://mweik1214:NewJob101@db4free.net/minflaskproj"
    app.secret_key = "A very secret key that nobody will guess"
    
    db.init_app(app)
    login.init_app(app)   

    with app.app_context():
        from mainroutes import routes
        app.register_blueprint(routes)

        db.create_all()
        return app