# Write your MySQL query statement below
select distinct v.author_id as id
from views v
join views c
on v.author_id=c.viewer_id
order by v.author_id asc;