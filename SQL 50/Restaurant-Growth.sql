1# Write your MySQL query statement below
2
3WITH DailyTotal AS (
4    SELECT
5        visited_on,
6        SUM(amount) AS amount
7    FROM Customer
8    GROUP BY visited_on
9),
10Rolling AS (
11    SELECT
12        visited_on,
13        SUM(amount) OVER (
14            ORDER BY visited_on 
15            ROWS BETWEEN 6 PRECEDING AND CURRENT ROW
16        ) AS total_amount
17    FROM DailyTotal
18)
19SELECT
20    visited_on,
21    total_amount AS amount,
22    ROUND(total_amount / 7, 2) AS average_amount
23FROM Rolling
24WHERE visited_on >= (
25    SELECT MIN(visited_on) + INTERVAL 6 DAY 
26    FROM DailyTotal
27)
28ORDER BY visited_on;
29