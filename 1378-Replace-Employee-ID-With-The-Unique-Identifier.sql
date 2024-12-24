# Write your MySQL query statement below
SELECT unique_id, name
FROM Employees Emp LEFT JOIN EmployeeUNI EmpUNI
ON Emp.id = EmpUNI.id;