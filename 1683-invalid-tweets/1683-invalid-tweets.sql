/* Write your T-SQL query statement below */
SELECT tweet_id
from tweets
where len(content)>15