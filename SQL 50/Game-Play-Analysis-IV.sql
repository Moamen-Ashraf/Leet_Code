1# Write your MySQL query statement below
2
3SELECT ROUND(COUNT(*) / (SELECT COUNT(DISTINCT player_id) FROM Activity), 2) AS fraction 
4FROM (SELECT *,
5             LEAD(event_date) OVER(PARTITION BY player_id ORDER BY player_id, event_date) AS Next_EventDate,
6             ROW_NUMBER() OVER(PARTITION BY player_id ORDER BY player_id, event_date) AS First_Login
7      FROM Activity) AS X
8WHERE DATEDIFF(Next_EventDate, event_date) = 1 AND First_Login = 1
9