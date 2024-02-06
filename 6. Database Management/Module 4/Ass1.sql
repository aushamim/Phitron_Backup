CREATE DATABASE DBASS1;
USE DBASS1;

-- Q1
CREATE TABLE student (
	id INT PRIMARY KEY,
    student_name VARCHAR(20),
    email VARCHAR(20),
    age INT,
    dept CHAR(3)
);

CREATE TABLE library (
	book_id INT PRIMARY KEY,
    student_id INT
);

CREATE TABLE fees (
	student_id INT PRIMARY KEY,
    fees INT
);



-- Q2
CREATE TABLE student (
	id INT PRIMARY KEY,
    student_name VARCHAR(20) NOT NULL,
    email VARCHAR(20) UNIQUE,
    age INT CHECK(age>10),
    dept CHAR(3)
);

CREATE TABLE library (
	book_id INT PRIMARY KEY,
    student_id INT NOT NULL
);

CREATE TABLE fees (
	student_id INT PRIMARY KEY,
    fees INT NOT NULL CHECK(fees>1000)
);

-- Q4
SET SQL_SAFE_UPDATES = 0;



--
CREATE TABLE Employee (
	EmployeeID INT PRIMARY KEY AUTO_INCREMENT,
    FirstName VARCHAR(10),
    LastName VARCHAR(10),
    Age INT,
    Department VARCHAR(20)
);

INSERT INTO Employee (FirstName, LastName, Age, Department)
VALUES
	('John', 'Doe', 28, 'Sales'),
	('Jane', 'Smith', 32,'Marketing'),
	('Michael', 'Jhonson', 35,'Finance'),
	('Sarah', 'Brown', 30,'HR'),
	('William', 'Davis', 25,'Engineering'),
    ('Emily', 'Wilson', 28,'Sales'),
	('Robert', 'Lee', 33,'Marketing'),
	('Laura', 'Hall', 29,'Finance'),
	('Thomas', 'White', 31,'HR'),
	('Olivia', 'Clark', 27,'Engineering');

-- Q5
SELECT DISTINCT Department FROM Employee;
SELECT Department FROM Employee GROUP BY Department;

-- Q6
SELECT LastName FROM Employee ORDER BY Age DESC;

-- Q7
SELECT LastName FROM Employee WHERE Age>30 AND Department='Marketing';

-- Q8
SELECT * FROM Employee;

-- Q9
SELECT * FROM Employee WHERE FirstName LIKE '%son%' OR LastName LIKE '%son%';

-- Q10
SELECT * FROM Employee WHERE Department LIKE '%Engineer%';











