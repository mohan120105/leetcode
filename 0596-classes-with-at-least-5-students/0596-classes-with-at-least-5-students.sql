/* Write your T-SQL query statement below */
SELECT CLASS
FROM COURSES
GROUP BY CLASS
-- ORDER BY COUNT(*) DESC
HAVING COUNT(*)>4