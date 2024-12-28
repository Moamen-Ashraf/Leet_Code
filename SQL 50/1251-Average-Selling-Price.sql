/* Write your T-SQL query statement below */
SELECT P.product_id,
       IFNULL(ROUND(SUM(P.price * U.units) / SUM(U.units), 2), 0) AS average_price
FROM Prices P LEFT JOIN UnitsSold U
ON P.product_id = U.product_id
WHERE U.purchase_date BETWEEN P.start_date AND P.end_date 
   OR U.purchase_date IS NULL
GROUP BY P.product_id;