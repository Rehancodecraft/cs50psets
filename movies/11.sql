SELECT m.title
FROM stars AS s
JOIN movies AS m ON s.movie_id = m.id
JOIN ratings AS r ON m.id = r.movie_id
JOIN people AS p ON s.person_id = p.id
WHERE p.name = 'Chadwick Boseman'
ORDER BY r.rating DESC
LIMIT 5;
