SELECT DISTINCT p.name
FROM stars AS s
JOIN movies AS m ON s.movie_id = m.id
JOIN people AS p ON s.person_id = p.id
WHERE m.year = 2004
ORDER BY p.birth;
