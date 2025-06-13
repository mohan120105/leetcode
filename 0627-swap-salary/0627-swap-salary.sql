/* Write your T-SQL query statement below */
-- UPDATE 
-- SET SEX = CASE 
-- WHEN 'f' THEN 'm'
-- WHEN 'm' THEN 'f'
-- END
UPDATE Salary
SET sex = CASE sex
             WHEN 'm' THEN 'f'
             WHEN 'f' THEN 'm'
          END;
