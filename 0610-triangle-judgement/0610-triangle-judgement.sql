/* Write your T-SQL query statement below */
SELECT x,y,z,
CASE 
WHEN X+Y>Z AND X+Z>Y AND Y+Z>X THEN 'Yes'
ELSE 'No'
END AS triangle
FROM TRIANGLE