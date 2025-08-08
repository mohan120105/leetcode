# Write your MySQL query statement below
select e1.name
from employee e1
join (
    select managerid
    from employee
    where managerid is not null
    group by managerid
    having count(managerid)>=5
)m
on e1.id=m.managerid;