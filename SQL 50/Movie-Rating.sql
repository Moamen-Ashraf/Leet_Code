-- Write your MySQL query statement below

(
    SELECT name AS results
    FROM (
        SELECT 
            U.name, 
            COUNT(MR.user_id) AS UserID_Count
        FROM MovieRating MR
        INNER JOIN Users U 
            ON MR.user_id = U.user_id
        GROUP BY U.name
        ORDER BY UserID_Count DESC, U.name
        LIMIT 1
    ) AS MaxRatingUser
)

UNION ALL

(
    SELECT title AS results
    FROM (
        SELECT 
            M.title, 
            AVG(MR.rating) AS avg_rating
        FROM MovieRating MR
        INNER JOIN Movies M 
            ON MR.movie_id = M.movie_id
        WHERE created_at BETWEEN '2020-02-01' AND '2020-02-28'
        GROUP BY M.movie_id, M.title
        ORDER BY avg_rating DESC, M.title
        LIMIT 1
    ) AS MaxAvgRating
);
