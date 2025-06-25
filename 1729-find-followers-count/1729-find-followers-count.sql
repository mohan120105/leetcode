/* Write your T-SQL query statement below */
SELECT distinct user_id, count(follower_id) followers_count 
from followers
group by user_id
order by user_id asc