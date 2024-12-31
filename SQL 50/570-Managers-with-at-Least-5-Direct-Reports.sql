# Write your MySQL query statement below
SELECT Mgr.name
FROM Employee Emp INNER JOIN Employee Mgr
ON Emp.managerId = mgr.id
GROUP BY Mgr.id, Mgr.name
HAVING COUNT(Mgr.id) >= 5
