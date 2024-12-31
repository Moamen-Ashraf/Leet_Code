# Write your MySQL query statement below
WITH ProcessTime AS (
    SELECT 
        machine_id, 
        process_id, 
        MAX(timestamp) - MIN(timestamp) AS duration
    FROM Activity
    GROUP BY machine_id, process_id
)
SELECT machine_id,
       ROUND(AVG(duration), 3) AS processing_time
FROM ProcessTime
GROUP BY machine_id