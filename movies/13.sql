SELECT DISTINCT p2.name
FROM stars AS s1
JOIN movies AS m ON s1.movie_id = m.id
JOIN stars AS s2 ON m.id = s2.movie_id
JOIN people AS p1 ON s1.person_id = p1.id
JOIN people AS p2 ON s2.person_id = p2.id
WHERE p1.name = 'Kevin Bacon' AND p1.birth = 1958 AND p2.name != 'Kevin Bacon';
