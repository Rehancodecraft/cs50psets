SELECT m.title
FROM movies AS m
JOIN stars AS s1 ON m.id = s1.movie_id
JOIN people AS p1 ON s1.person_id = p1.id
JOIN stars AS s2 ON m.id = s2.movie_id
JOIN people AS p2 ON s2.person_id = p2.id
WHERE p1.name = 'Bradley Cooper' AND p2.name = 'Jennifer Lawrence';
