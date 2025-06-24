# Write your MySQL query statement below
SELECT machine_id,round(Avg(en-st),3) processing_time
from(  
select machine_id,process_id,
max(case when activity_type = "start" then timestamp END) st,
max(case when activity_type = "end" then timestamp END) en
from activity
group by machine_id,process_id
) process_time
group by machine_id