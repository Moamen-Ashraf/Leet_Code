1# Write your MySQL query statement below
2
3SELECT DISTINCT(num) AS ConsecutiveNums 
4FROM (
5    SELECT *,
6           LEAD(num) OVER () AS NextVal,
7           LAG(num) OVER () AS PreVal
8    FROM logs) AS X
9WHERE num = NextVal AND num = PreVal 