SELECT COUNT(*) FROM movies WHERE title IN (SELECT title FROM movies WHERE id IN ( SELECT movie_id FROM ratings WHERE rating = 10));

