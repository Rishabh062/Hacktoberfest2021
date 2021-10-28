/* Write a query that prints a list of employee names (i.e.: the name attribute) for employees in Employee having a salary greater than $2000 
per month who have been employees for less than  10 months. Sort your result by ascending employee_id. */

SELECT NAME FROM EMPLOYEE WHERE SALARY > 2000 AND MONTHS <10  ORDER BY EMPLOYEE_ID ;
