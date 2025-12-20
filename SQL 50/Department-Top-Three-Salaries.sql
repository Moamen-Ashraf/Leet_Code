1# Write your MySQL query statement below
2
3WITH RankedSalaries AS (
4    SELECT
5        d.name AS Department,
6        e.name AS Employee,
7        e.salary AS Salary,
8        DENSE_RANK() OVER (
9            PARTITION BY e.departmentId
10            ORDER BY e.salary DESC
11        ) AS salary_rank
12    FROM Employee e
13    JOIN Department d
14        ON e.departmentId = d.id
15)
16SELECT Department, Employee, Salary
17FROM RankedSalaries
18WHERE salary_rank <= 3
19ORDER BY Department, Salary DESC;
20