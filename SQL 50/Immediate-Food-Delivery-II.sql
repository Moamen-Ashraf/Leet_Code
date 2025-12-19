1# Write your MySQL query statement below
2
3SELECT ROUND(COUNT(*) * 100 / (SELECT COUNT(DISTINCT customer_id) FROM Delivery),2) AS immediate_percentage 
4FROM (SELECT *,
5            ROW_NUMBER() OVER (PARTITION BY customer_id ORDER BY order_date) AS id_rank 
6      FROM Delivery) AS X
7WHERE order_date = customer_pref_delivery_date AND id_rank = 1