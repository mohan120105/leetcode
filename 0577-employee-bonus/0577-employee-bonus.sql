# Write your MySQL query statement below
select e.name,b.bonus
from employee e
left join bonus b
on e.empid=b.empid
group by e.empid
having b.bonus<1000 or isnull(b.bonus);