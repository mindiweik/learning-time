SELECT ratings.rating, movies.title FROM ratings JOIN movies ON ratings.movie_id = movies.id
WHERE year = 2010 ORDER BY ratings.rating DESC, movies.title;