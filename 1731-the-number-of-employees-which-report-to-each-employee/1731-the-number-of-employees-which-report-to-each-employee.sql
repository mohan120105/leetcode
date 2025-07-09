# Write your MySQL query statement below
select e.employee_id, e.name, count(r.reports_to) as reports_count, round(avg(r.age)) as average_age
from employees e
join employees r
on e.employee_id=r.reports_to
group by r.reports_to,e.name
order by r.reports_to