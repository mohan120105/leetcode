/* Write your T-SQL query statement below */
SELECT 
(select DISTINCT top 1 SALARY 
FROM EMPLOYEE
WHERE SALARY<(
    SELECT MAX(SALARY) 
    FROM EMPLOYEE
)
ORDER BY SALARY DESC
) SecondHighestSalary
