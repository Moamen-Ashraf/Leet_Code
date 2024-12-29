# Write your MySQL query statement below
SELECT R.employee_id,
       R.name,
       COUNT(R.employee_id) AS reports_count,
       ROUND(AVG(E.age)) AS average_age   
FROM 
    Employees E
INNER JOIN 
     Employees R
ON E.reports_to = R.employee_id
GROUP BY R.employee_id, R.name
ORDER BY R.employee_id;