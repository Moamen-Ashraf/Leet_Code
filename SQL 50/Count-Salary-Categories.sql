1# Write your MySQL query statement below
2
3WITH
4  categories AS (
5    SELECT 'Low Salary' AS category
6    UNION ALL
7    SELECT 'Average Salary'
8    UNION ALL
9    SELECT 'High Salary'
10)
11
12SELECT
13  C.category,
14  COUNT(X.category) AS accounts_count
15FROM categories C
16LEFT JOIN (
17        SELECT
18        CASE
19            WHEN income < 20000 THEN 'Low Salary'
20            WHEN income BETWEEN 20000 AND 50000  THEN 'Average Salary'
21            ELSE 'High Salary'
22        END AS category
23        FROM Accounts
24    ) AS X
25ON C.category = X.category
26GROUP BY  X.category