SELECT movies.id, movies.name FROM movies_actors
JOIN movies ON movies_actors.id_movies = movies.id
JOIN actors ON movies_actors.id_actors = actors.id
JOIN genres ON movies.id_genres = genres.id
WHERE (actors.name = 'Marcelo Silva' or actors.name = 'Miguel Silva') AND genres.description = 'Action';