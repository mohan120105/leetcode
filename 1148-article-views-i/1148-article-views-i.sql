/* Write your T-SQL query statement below */
SELECT DISTINCT author_id id
FROM VIEWS
WHERE AUTHOR_ID = VIEWER_ID
ORDER BY AUTHOR_ID ASC