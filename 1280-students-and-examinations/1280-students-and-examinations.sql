/* Write your T-SQL query statement below */
SELECT st.student_id,st.student_name,s.subject_name,count(e.subject_name)attended_exams
from students st
cross join subjects s
left join examinations e
on st.student_id = e.student_id and s.subject_name=e.subject_name
group by st.student_id,
st.student_name,
s.subject_name
order by st.student_id,
s.subject_name
-- SELECT 
--     st.student_id,
--     st.student_name,
--     s.subject_name,
--     COUNT(e.subject_name) AS attended_exams
-- FROM students st
-- CROSS JOIN subjects s
-- LEFT JOIN examinations e
--     ON st.student_id = e.student_id AND s.subject_name = e.subject_name
-- GROUP BY 
--     st.student_id,
--     st.student_name,
--     s.subject_name
-- ORDER BY 
--     st.student_id,
--     s.subject_name;
