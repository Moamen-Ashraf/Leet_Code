SELECT 
    P.product_id,
    min_year.first_year,
    S.quantity,
    S.price
FROM 
    Sales S
INNER JOIN 
    Product P
ON 
    S.product_id = P.product_id
INNER JOIN 
    (SELECT 
         S.product_id,
         MIN(S.year) AS first_year
     FROM 
         Sales S
     GROUP BY 
         S.product_id) AS min_year
ON 
    S.product_id = min_year.product_id AND S.year = min_year.first_year;
