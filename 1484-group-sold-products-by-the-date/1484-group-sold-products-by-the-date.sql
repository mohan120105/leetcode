/* Write your T-SQL query statement below */
-- SELECT sell_date, count(DISTINCT PRODUCT) num_sold, 
-- STRING_AGG(DISTINCT PRODUCT, ',') WITHIN GROUP(ORDER BY PRODUCT)  products
-- FROM ACTIVITIES 
-- GROUP BY SELL_DATE
-- order by sell_date


WITH DistinctProducts AS (
    SELECT DISTINCT sell_date, product
    FROM Activities
)
SELECT 
    sell_date,
    COUNT(product) AS num_sold,
    STRING_AGG(product, ',') 
        WITHIN GROUP (ORDER BY product) AS products
FROM 
    DistinctProducts
GROUP BY 
    sell_date
ORDER BY 
    sell_date;
