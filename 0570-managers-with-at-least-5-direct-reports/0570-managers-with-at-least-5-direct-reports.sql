# Write your MySQL query statement below
# Select * 
# From Employee
# group by managerId, name
# Having count( Distinct managerId) >4;

SELECT Manager.name
FROM Employee Manager
JOIN Employee DirectReport ON Manager.id = DirectReport.managerId
GROUP BY Manager.id, Manager.name
HAVING COUNT(DISTINCT DirectReport.id) >= 5;