1# Write your MySQL query statement below
2
3SELECT p.product_id, COALESCE(t.new_price, 10) AS price
4FROM (SELECT DISTINCT product_id FROM Products) p
5LEFT JOIN (
6    SELECT product_id, new_price
7    FROM (
8        SELECT product_id,
9               new_price,
10               ROW_NUMBER() OVER (PARTITION BY product_id ORDER BY change_date DESC) AS rn
11        FROM Products
12        WHERE change_date <= '2019-08-16'
13    ) x
14    WHERE rn = 1
15) t
16ON p.product_id = t.product_id;