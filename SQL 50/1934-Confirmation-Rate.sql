WITH Action AS (
    SELECT 
        S.user_id,
        C.action
    FROM Signups S
    LEFT JOIN Confirmations C
    ON S.user_id = C.user_id
)
SELECT 
    A.user_id,
    ROUND(
        IFNULL(
            CAST(SUM(CASE WHEN A.action = 'confirmed' THEN 1 ELSE 0 END) AS DECIMAL) / 
            IFNULL(COUNT(A.action), 0),  0
        ), 2
    ) AS confirmation_rate
FROM Action A
GROUP BY A.user_id
