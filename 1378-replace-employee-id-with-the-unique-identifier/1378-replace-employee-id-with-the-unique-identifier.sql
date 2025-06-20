/* Write your T-SQL query statement below */
SELECT E.unique_id, EM.name
from EMPLOYEEUNI E
RIGHT JOIN EMPLOYEES EM
ON E.ID=EM.ID