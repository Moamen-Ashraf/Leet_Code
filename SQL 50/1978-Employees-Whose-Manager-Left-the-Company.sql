# Write your MySQL query statement below

SELECT employee_id
FROM Employees M
WHERE salary < 30000 
    AND NOT EXISTS(
        SELECT employee_id
        FROM Employees E
        WHERE E.employee_id = M.manager_id
        )
    AND manager_id IS NOT NULL
ORDER BY employee_id;