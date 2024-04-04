from . import dbConnection
# sql = """CREATE TABLE Departments (
#     DepartmentID INT PRIMARY KEY AUTO_INCREMENT,
#     DepartmentName VARCHAR(100) NOT NULL)"""

sql = """CREATE TABLE Students (
    StudentID INT PRIMARY KEY AUTO_INCREMENT,
    FirstName VARCHAR(50) NOT NULL,
    LastName VARCHAR(50) NOT NULL,
    DateOfBirth DATE,
    Gender ENUM('Male', 'Female', 'Other'),
    Email VARCHAR(100),
    Phone VARCHAR(15),
    Address VARCHAR(255),
    City VARCHAR(50),
    State VARCHAR(50),
    ZipCode VARCHAR(10),
    Country VARCHAR(50),
    EnrolledDate DATE,
    GraduationDate DATE,
    DepartmentID INT,
    FOREIGN KEY (DepartmentID) REFERENCES Departments(DepartmentID)
)"""
dbConnection.cursor.execute(sql)