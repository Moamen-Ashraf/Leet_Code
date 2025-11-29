1# Write your MySQL query statement below
2SELECT Today.id
3FROM Weather Today CROSS JOIN Weather Yesterday
4WHERE Today.recordDate = Yesterday.recordDate + INTERVAL 1 DAY
5  AND Today.temperature > Yesterday.temperature;