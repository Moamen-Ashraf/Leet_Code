# Write your MySQL query statement below
WITH Max_ID AS(
    SELECT MAX(id) as max_id FROM Seat
)
SELECT
CASE 
    WHEN id = max_id AND max_id % 2 != 0 THEN id
    WHEN id %2 = 0 THEN id - 1
    WHEN id %2 != 0 THEN id + 1
END AS id,
       student
FROM Seat, Max_ID
ORDER BY id 