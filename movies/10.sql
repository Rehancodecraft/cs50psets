SELECT DISTINCT p.name
FROM directors AS d
JOIN movies AS m ON d.movie_id = m.id
JOIN ratings AS r ON m.id = r.movie_id
JOIN people AS p ON d.person_id = p.id
WHERE r.rating >= 9.0;