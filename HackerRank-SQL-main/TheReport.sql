/*
Link to the problem statement : https://www.hackerrank.com/challenges/the-report/problem
*/
select if(grades.grade > 7, students.name, null), grades.grade, students.marks
from students, grades
where marks between min_mark and max_mark
order by grade desc, name;
