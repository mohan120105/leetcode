/* Write your T-SQL query statement below */
select round(
    avg(
        cast(
        case 
            when order_date=customer_pref_delivery_date then 1
            else 0
        end as float
    )
    ) *100, 2) as immediate_percentage
from (

    select *, row_number() over (partition by customer_id order by order_date)as rn 
    from delivery
 
) t
where rn=1