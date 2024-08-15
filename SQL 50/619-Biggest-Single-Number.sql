-- Write your PostgreSQL query statement below
SELECT MAX(num) AS num
FROM (
    SELECT num
    FROM MYNumbers
    GROUP BY num
    HAVING COUNT(*) = 1
    ORDER BY num DESC
)