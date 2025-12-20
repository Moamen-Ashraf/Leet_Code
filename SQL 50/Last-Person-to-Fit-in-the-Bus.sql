1# Write your MySQL query statement below
2SELECT person_name
3FROM (SELECT *,
4             SUM(weight) OVER(ORDER BY turn) AS Total_Weight
5     FROM Queue
6) AS X
7WHERE Total_Weight <= 1000
8ORDER BY Total_Weight DESC
9LIMIT 1