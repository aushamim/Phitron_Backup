-- Q3
CREATE TABLE Employees (
	Employee_ID INT PRIMARY KEY,
	First_Name VARCHAR(50) NOT NULL,
	Last_Name VARCHAR(50) NOT NULL,
	Date_of_Birth DATE NOT NULL,
	Department_ID INT NOT NULL,
	Salary DECIMAL (10,2) NOT NULL
);

create table Departments (
	Department_ID INT PRIMARY KEY,
	Department_Name VARCHAR(50) NOT NULL
);

-- Q4
SELECT MAX(salary)
FROM employees
WHERE salary < (SELECT MAX(salary) FROM employees);

SELECT DISTINCT salary
FROM employees
ORDER BY salary DESC
LIMIT 1,1;

-- Q5
SELECT department_name, AVG(salary) as average_salary
FROM employees as emp
	JOIN departments as dept
    ON emp.department_id = dept.department_id
GROUP BY department_name;

-- Q6
-- Inner Join
SELECT first_name, department_name
FROM employees as emp
	JOIN departments as dept
    ON emp.department_id = dept.department_id;
    
-- Left Join
SELECT first_name, department_name
FROM employees as emp
	LEFT JOIN departments as dept
    ON emp.department_id = dept.department_id;
    
-- Right Join
SELECT first_name, department_name
FROM employees as emp
	RIGHT JOIN departments as dept
    ON emp.department_id = dept.department_id;

-- Self Join
SELECT emp.first_name AS Employee, mng.first_name AS Manager
FROM employees AS emp
	JOIN employees AS mng
    ON emp.manager_id = mng.employee_id;
    
-- Q8
SELECT first_name
FROM employees
WHERE salary < (SELECT salary FROM employees
				WHERE first_name = 'Steven'
				ORDER BY salary DESC
				LIMIT 1);

-- Q9
SELECT job_id, count(*)
FROM employees
GROUP BY job_id;

-- Q10
SELECT department_name
FROM employees as emp
	RIGHT JOIN departments as dept
    ON emp.department_id = dept.department_id
WHERE first_name IS NULL;

























