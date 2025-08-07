# Write your MySQL query statement below
select name
from customer
where referee_id!=2 or id in(
    select id 
    from customer
    where isnull(referee_id)
);