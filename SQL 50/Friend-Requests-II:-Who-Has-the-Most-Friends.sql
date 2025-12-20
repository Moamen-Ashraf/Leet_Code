1# Write your MySQL query statement below
2
3WITH AllFriends AS (
4    SELECT requester_id AS id
5    FROM RequestAccepted
6    UNION ALL
7    SELECT accepter_id AS id
8    FROM RequestAccepted
9)
10SELECT
11    id,
12    COUNT(*) AS num
13FROM AllFriends
14GROUP BY id
15ORDER BY num DESC
16LIMIT 1;
17