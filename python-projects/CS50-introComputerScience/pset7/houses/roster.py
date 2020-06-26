from cs50 import SQL
import sys


# check command-line arguments
if len(sys.argv) != 2:
    print("Usage: python roster.py housename")
    exit(1)

# name the house argument
house = str(sys.argv[1])

# query database for all students in house
# print each student's full name and birth year
# students should be sorted alphabetically by last, first
db = SQL("sqlite:///students.db")
rostercall = db.execute(
    "SELECT first, middle, last, birth FROM students WHERE students.house LIKE (?) ORDER BY students.last, students.first", house)

for row in rostercall:
    if row['middle'] != None:
        print(f"{row['first']} {row['middle']} {row['last']}, born {row['birth']}")
    else:
        print(f"{row['first']} {row['last']}, born {row['birth']}")