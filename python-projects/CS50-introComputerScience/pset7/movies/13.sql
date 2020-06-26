SELECT people.name FROM stars, people, movies
WHERE stars.person_id = people.id AND stars.movie_id = movies.id AND stars.movie_id
IN (SELECT DISTINCT stars.movie_id FROM stars, people
WHERE stars.person_id = people.id AND people.name = "Kevin Bacon" AND people.birth = 1958)
AND people.name != "Kevin Bacon";