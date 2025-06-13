/* Write your T-SQL query statement below */
SELECT * 
FROM CINEMA
WHERE ID%2!=0 AND DESCRIPTION!='boring'
order by id desc