from cs50 import SQL
import csv
import sys

# check command-line args
if len(sys.argv) != 2:
    print("Usage: python import.py characters.csv")
    exit(1)

# link students database
db = SQL("sqlite:///students.db")

# declare a list for name split
fullname = []
# open CSV file
with open(sys.argv[1]) as csvfile:
    reader = csv.DictReader(csvfile)
    for row in reader:
        fullname.append(row)

# For each row, parse name then insert into database
for i in fullname:
    split = i['name'].split()
    if len(split) == 2:
        db.execute("INSERT INTO students (first, middle, last, house, birth) VALUES (?, NULL, ?, ?, ?)", split[0], split[1], i['house'], i['birth'])
    if len(split) == 3:
        db.execute("INSERT INTO students (first, middle, last, house, birth) VALUES (?, ?, ?, ?, ?)", split[0], split[1], split[2], i['house'], i['birth'])
