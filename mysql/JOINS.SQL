CREATE TABLE employees (
    employee_id INT PRIMARY KEY,
    employee_name VARCHAR(255),
    department_id INT
);

INSERT INTO employees (employee_id, employee_name, department_id) VALUES 
(1, 'John Doe', 1), 
(2, 'Jane Smith', 2), 
(3, 'Bob Johnson', 1), 
(4, 'Alice Brown', 3);


CREATE TABLE departments (
    department_id INT PRIMARY KEY,
    department_name VARCHAR(255)
);

INSERT INTO departments (department_id, department_name) VALUES 
(1, 'HR'), 
(2, 'IT'), 
(3, 'Finance');


mysql> SELECT employees.employee_id, employees.employee_name, departments.department_name
    -> FROM employees
    -> INNER JOIN departments ON employees.department_id = departments.department_id;
+-------------+---------------+-----------------+
| employee_id | employee_name | department_name |
+-------------+---------------+-----------------+
|           1 | John Doe      | HR              |
|           2 | Jane Smith    | IT              |
|           3 | Bob Johnson   | HR              |
|           4 | Alice Brown   | Finance         |
+-------------+---------------+-----------------+

mysql> SELECT employees.employee_id, employees.employee_name, departments.department_name
    -> FROM employees
    -> LEFT JOIN departments ON employees.department_id = departments.department_id;
+-------------+---------------+-----------------+
| employee_id | employee_name | department_name |
+-------------+---------------+-----------------+
|           1 | John Doe      | HR              |
|           2 | Jane Smith    | IT              |
|           3 | Bob Johnson   | HR              |
|           4 | Alice Brown   | Finance         |
+-------------+---------------+-----------------+


mysql> SELECT
    ->     employees.employee_id,
    ->     employees.employee_name,
    ->     departments.department_name
    -> FROM
    ->     employees
    -> LEFT JOIN
    ->     departments ON employees.department_id = departments.department_id
    -> UNION
    -> SELECT
    ->     employees.employee_id,
    ->     employees.employee_name,
    ->     departments.department_name
    -> FROM
    ->     departments
    -> LEFT JOIN
    ->     employees ON departments.department_id = employees.department_id
    -> WHERE
    ->     employees.employee_id IS NULL;
+-------------+---------------+-----------------+
| employee_id | employee_name | department_name |
+-------------+---------------+-----------------+
|           1 | John Doe      | HR              |
|           2 | Jane Smith    | IT              |
|           3 | Bob Johnson   | HR              |
|           4 | Alice Brown   | Finance         |
+-------------+---------------+-----------------+


mysql> SELECT employees.employee_id, employees.employee_name, departments.department_name
    -> FROM employees
    -> CROSS JOIN departments;
+-------------+---------------+-----------------+
| employee_id | employee_name | department_name |
+-------------+---------------+-----------------+
|           1 | John Doe      | Finance         |
|           1 | John Doe      | IT              |
|           1 | John Doe      | HR              |
|           2 | Jane Smith    | Finance         |
|           2 | Jane Smith    | IT              |
|           2 | Jane Smith    | HR              |
|           3 | Bob Johnson   | Finance         |
|           3 | Bob Johnson   | IT              |
|           3 | Bob Johnson   | HR              |
|           4 | Alice Brown   | Finance         |
|           4 | Alice Brown   | IT              |
|           4 | Alice Brown   | HR              |
+-------------+---------------+-----------------+


mysql> SELECT e.employee_id AS employee_id,
    ->        e.employee_name AS employee_name,
    ->        e.department_id AS employee_department,
    ->        m.employee_id AS manager_id,
    ->        m.employee_name AS manager_name
    -> FROM employees e
    -> JOIN employees m ON e.department_id = m.department_id
    ->                  AND e.employee_id <> m.employee_id;
+-------------+---------------+---------------------+------------+--------------+
| employee_id | employee_name | employee_department | manager_id | manager_name |
+-------------+---------------+---------------------+------------+--------------+
|           3 | Bob Johnson   |                   1 |          1 | John Doe     |
|           1 | John Doe      |                   1 |          3 | Bob Johnson  |
+-------------+---------------+---------------------+------------+--------------+






