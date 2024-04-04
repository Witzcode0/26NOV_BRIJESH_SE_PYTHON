from . import dbConnection

# sql = """INSERT INTO Departments (DepartmentName) 
# VALUES 
# ('Computer Science'),
# ('Mathematics'),
# ('Physics'),
# ('Biology'),
# ('Business Administration');
# """

sql = """INSERT INTO Students (FirstName, LastName, DateOfBirth, Gender, Email, Phone, Address, City, State, ZipCode, Country, EnrolledDate, GraduationDate, DepartmentID) 
VALUES 
('John', 'Doe', '2000-05-15', 'Male', 'john.doe@example.com', '123-456-7890', '123 Main Street', 'Anytown', 'AnyState', '12345', 'USA', '2022-09-01', '2026-05-30', 1),
('Jane', 'Smith', '2001-03-20', 'Female', 'jane.smith@example.com', '234-567-8901', '456 Oak Avenue', 'Anothercity', 'AnotherState', '23456', 'USA', '2023-08-25', '2027-05-30', 2),
('Michael', 'Johnson', '1999-11-10', 'Male', 'michael.johnson@example.com', '345-678-9012', '789 Elm Street', 'Anothercity', 'AnotherState', '34567', 'USA', '2021-09-10', '2025-06-01', 1),
('Emily', 'Brown', '2002-07-05', 'Female', 'emily.brown@example.com', '456-789-0123', '101 Pine Street', 'YetAnotherCity', 'YetAnotherState', '45678', 'USA', '2024-09-01', '2028-05-30', 3),
('David', 'Lee', '2000-01-25', 'Male', 'david.lee@example.com', '567-890-1234', '202 Maple Avenue', 'YetAnotherCity', 'YetAnotherState', '56789', 'USA', '2022-08-15', '2026-06-01', 5);
"""

dbConnection.cursor.execute(sql)

dbConnection.db.commit()