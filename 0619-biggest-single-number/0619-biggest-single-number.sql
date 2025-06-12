/* Write your T-SQL query statement below */
SELECT MAX(NUM) num
FROM (
    select num
    from mynumbers
    GROUP BY num
-- ORDER BY COUNT(*)
    HAVING COUNT(*)=1
)
as single