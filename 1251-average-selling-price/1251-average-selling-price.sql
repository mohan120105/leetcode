/* Write your T-SQL query statement below */
SELECT P.product_id,ROUND(
    COALESCE(SUM(P.PRICE*U.UNITS*1.0),0)/
    NULLIF(SUM(U.UNITS),0),2
) average_price
FROM PRICES P
LEFT JOIN UNITSSOLD U
ON P.PRODUCT_ID=U.PRODUCT_ID
AND U.PURCHASE_DATE BETWEEN P.START_DATE AND P.END_DATE
GROUP BY P.PRODUCT_ID
