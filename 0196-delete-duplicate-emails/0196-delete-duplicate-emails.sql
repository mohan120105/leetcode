-- /* Write your T-SQL query statement below */
-- WITH RANKED_MAIL AS (
--     SELECT *,
--     ROW_NUMBER() OVER (PARTITION BY EMAIL ORDER BY ID)AS RN
--     FROM PERSON
-- )
-- DELETE FROM RANKED_MAILS
-- WHERE RN>1);

WITH RankedMails AS (
    SELECT 
        *,
        ROW_NUMBER() OVER (PARTITION BY email ORDER BY id) AS rn
    FROM PERSON
)
DELETE FROM RankedMails
WHERE rn > 1;
