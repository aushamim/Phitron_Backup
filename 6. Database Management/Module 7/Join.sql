SELECT employees.first_name, departments.department_name, employees.department_id
FROM employees, departments
WHERE employees.department_id = departments.department_id;

SELECT employees.first_name, departments.department_name, employees.department_id
FROM employees JOIN departments 
ON employees.department_id = departments.department_id;

SELECT emp.first_name AS Employee, mng.first_name AS Manager
FROM employees AS emp
	JOIN employees AS mng
    ON emp.manager_id = mng.employee_id;