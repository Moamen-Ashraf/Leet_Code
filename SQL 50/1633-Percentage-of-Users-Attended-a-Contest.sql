# Write your MySQL query statement below
SELECT contest_id,
       ROUND(COUNT(U.user_id) / (SELECT COUNT(*) FROM Users) * 100, 2) AS percentage
FROM
    USERS U 
INNER JOIN 
    REGISTER R
ON U.user_id = R.user_id
GROUP BY contest_id
ORDER BY percentage DESC, contest_id ASC;