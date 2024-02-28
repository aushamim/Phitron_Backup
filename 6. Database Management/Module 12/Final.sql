USE dbass1;

CREATE TABLE Student (
    StudentID INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(255) NOT NULL,
    Email VARCHAR(255) NOT NULL,
    Phone VARCHAR(15),
    Address TEXT
);

CREATE TABLE Book (
    ISBN VARCHAR(13) PRIMARY KEY,
    Title VARCHAR(255) NOT NULL,
    Author VARCHAR(255) NOT NULL,
    Genre VARCHAR(50),
    TotalCopies INT NOT NULL,
    AvailableCopies INT NOT NULL
);

CREATE TABLE Borrowing (
    BorrowID INT AUTO_INCREMENT PRIMARY KEY,
    StudentID INT,
    ISBN VARCHAR(13),
    BorrowDate DATE NOT NULL,
    DueDate DATE NOT NULL,
    ReturnDate DATE,
    FOREIGN KEY (StudentID) REFERENCES Student(StudentID),
    FOREIGN KEY (ISBN) REFERENCES Book(ISBN)
);


INSERT INTO Student (Name, Email, Phone, Address)
VALUES
	('Shamim', 'shamim@gmail.com', '0123456789', 'Dhaka'),
    ('Nayeem', 'nayeem@gmail.com', '0123456789', 'Dhaka'),
    ('Shihab', 'Shihab@gmail.com', '0123456789', 'Dhaka');
    
INSERT INTO Book
VALUES
	('9781234567890', 'Cander Gari', 'Shihab', 'Comedy', 10, 10),
    ('9781234567891', 'Amar Bou', 'Amit', 'Romance', 5, 5),
    ('9781234567892', 'Amit er Bou', 'Shihab', 'Misc', 2, 2);
    
SELECT * FROM Book;

SELECT ISBN FROM Book
ORDER BY AvailableCopies DESC
LIMIT 1;

-- Q2
INSERT INTO Borrowing (StudentID, ISBN, BorrowDate, DueDate)
VALUES (3, (SELECT ISBN FROM Book ORDER BY AvailableCopies DESC LIMIT 1), '2024-02-08', '2024-02-18');

-- Q3
UPDATE Book
SET AvailableCopies = AvailableCopies - 1
WHERE ISBN = (SELECT ISBN FROM (SELECT ISBN FROM Book ORDER BY AvailableCopies DESC LIMIT 1) AS sub);
--
UPDATE Book
SET AvailableCopies = AvailableCopies - 1
WHERE ISBN = '9781234567890';

-- Q4
SELECT s.Name
FROM Student as s
	JOIN Borrowing as b
    ON s.StudentID = b.StudentID
GROUP BY s.StudentID
HAVING COUNT(b.StudentID) = (
	SELECT COUNT(StudentID)
	FROM Borrowing
	GROUP BY StudentID
	ORDER BY COUNT(StudentID) DESC
	LIMIT 1
);

-- Q5
SELECT ISBN, StudentID
FROM Borrowing
WHERE DueDate < CURDATE();

-- Q8
SELECT MIN(Salary)
FROM Employees
WHERE Salary > (SELECT MIN(Salary) FROM Employees);

SELECT DISTINCT Salary
FROM Employees
ORDER BY Salary ASC
LIMIT 1,1;

-- Q9
CREATE TABLE Department (
    DepartmentID INT AUTO_INCREMENT PRIMARY KEY,
    DepartmentName VARCHAR(255) NOT NULL
);

CREATE TABLE Employee (
    EmployeeID INT AUTO_INCREMENT PRIMARY KEY,
    DepartmentID INT,
    Name VARCHAR(255) NOT NULL,
    Email VARCHAR(255) NOT NULL,
    Phone VARCHAR(15),
    Address TEXT,
    FOREIGN KEY (DepartmentID) REFERENCES Department(DepartmentID) ON DELETE SET NULL
);

CREATE TABLE JobHistory (
    JobID INT AUTO_INCREMENT PRIMARY KEY,
    EmployeeID INT NOT NULL,
    DepartmentID INT NOT NULL,
    FOREIGN KEY (EmployeeID) REFERENCES Employee(EmployeeID) ON DELETE CASCADE,
    FOREIGN KEY (DepartmentID) REFERENCES Department(DepartmentID)
);



















