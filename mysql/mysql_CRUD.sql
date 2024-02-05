-- Create new data
INSERT INTO users (first_name, last_name, email, password, gender) VALUES ('brijesh', 'gondaliya', 'brijesh.gondaliya@gmail.com', 'test@123', 'Male');
Query OK, 1 row affected (0.01 sec)

--  read data from table
mysql> select * from users;
+---------+------------+-----------+-----------------------------+--------+----------+--------+
| user_id | first_name | last_name | email                       | mobile | password | gender |
+---------+------------+-----------+-----------------------------+--------+----------+--------+
|       1 | brijesh    | gondaliya | brijesh.gondaliya@gmail.com | NULL   | test@123 | Male   |
+---------+------------+-----------+-----------------------------+--------+----------+--------+

mysql> select first_name,last_name,email from users;
+------------+-----------+-----------------------------+
| first_name | last_name | email                       |
+------------+-----------+-----------------------------+
| brijesh    | gondaliya | brijesh.gondaliya@gmail.com |
+------------+-----------+-----------------------------+


mysql> INSERT INTO users (first_name, last_name, email, password, gender, mobile) VALUES
    -> ('John', 'Doe', 'john.doe@email.com', 'securepass1', 'Male', '123-456-7890'),
    -> ('Jane', 'Smith', 'jane.smith@email.com', 'mypassword', 'Female', '987-654-3210'),
    -> ('Bob', 'Johnson', 'bob.johnson@email.com', 'secretword', 'Male', '555-123-4567'),
    -> ('Alice', 'Williams', 'alice.williams@email.com', 'pass123', 'Female', '333-999-0000'),
    -> ('Charlie', 'Brown', 'charlie.brown@email.com', 'letmein', 'Male', '777-888-9999'),
    -> ('Eva', 'Davis', 'eva.davis@email.com', 'strongpass', 'Female', '111-222-3333'),
    -> ('Sam', 'Miller', 'sam.miller@email.com', 'password123', 'Male', '444-555-6666'),
    -> ('Linda', 'Taylor', 'linda.taylor@email.com', 'secure123', 'Female', '888-777-6666'),
    -> ('Mike', 'White', 'mike.white@email.com', 'mypass', 'Male', '666-999-1111'),
    -> ('Sophie', 'Clark', 'sophie.clark@email.com', 'pass456', 'Female', '222-333-4444');
Query OK, 10 rows affected (0.00 sec)
Records: 10  Duplicates: 0  Warnings: 0

mysql> select * from users;
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+
| user_id | first_name | last_name | email                       | mobile       | password    | gender |
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+
|       1 | brijesh    | gondaliya | brijesh.gondaliya@gmail.com | NULL         | test@123    | Male   |
|       2 | John       | Doe       | john.doe@email.com          | 123-456-7890 | securepass1 | Male   |
|       3 | Jane       | Smith     | jane.smith@email.com        | 987-654-3210 | mypassword  | Female |
|       4 | Bob        | Johnson   | bob.johnson@email.com       | 555-123-4567 | secretword  | Male   |
|       5 | Alice      | Williams  | alice.williams@email.com    | 333-999-0000 | pass123     | Female |
|       6 | Charlie    | Brown     | charlie.brown@email.com     | 777-888-9999 | letmein     | Male   |
|       7 | Eva        | Davis     | eva.davis@email.com         | 111-222-3333 | strongpass  | Female |
|       8 | Sam        | Miller    | sam.miller@email.com        | 444-555-6666 | password123 | Male   |
|       9 | Linda      | Taylor    | linda.taylor@email.com      | 888-777-6666 | secure123   | Female |
|      10 | Mike       | White     | mike.white@email.com        | 666-999-1111 | mypass      | Male   |
|      11 | Sophie     | Clark     | sophie.clark@email.com      | 222-333-4444 | pass456     | Female |
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+


-- update data into the table
mysql> update users set first_name = "bubban", last_name="shah" where user_id = 4;
Query OK, 1 row affected (0.01 sec)
Rows matched: 1  Changed: 1  Warnings: 0

mysql> select * from users where user_id = 4;
+---------+------------+-----------+-----------------------+--------------+------------+--------+
| user_id | first_name | last_name | email                 | mobile       | password   | gender |
+---------+------------+-----------+-----------------------+--------------+------------+--------+
|       4 | bubban     | shah      | bob.johnson@email.com | 555-123-4567 | secretword | Male   |
+---------+------------+-----------+-----------------------+--------------+------------+--------+

mysql> delete from users where user_id = 11;
Query OK, 1 row affected (0.00 sec)

mysql> select * from users;
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+
| user_id | first_name | last_name | email                       | mobile       | password    | gender |
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+
|       1 | brijesh    | gondaliya | brijesh.gondaliya@gmail.com | NULL         | test@123    | Male   |
|       2 | John       | Doe       | john.doe@email.com          | 123-456-7890 | securepass1 | Male   |
|       3 | Jane       | Smith     | jane.smith@email.com        | 987-654-3210 | mypassword  | Female |
|       4 | bubban     | shah      | bob.johnson@email.com       | 555-123-4567 | secretword  | Male   |
|       5 | Alice      | Williams  | alice.williams@email.com    | 333-999-0000 | pass123     | Female |
|       6 | Charlie    | Brown     | charlie.brown@email.com     | 777-888-9999 | letmein     | Male   |
|       7 | Eva        | Davis     | eva.davis@email.com         | 111-222-3333 | strongpass  | Female |
|       8 | Sam        | Miller    | sam.miller@email.com        | 444-555-6666 | password123 | Male   |
|       9 | Linda      | Taylor    | linda.taylor@email.com      | 888-777-6666 | secure123   | Female |
|      10 | Mike       | White     | mike.white@email.com        | 666-999-1111 | mypass      | Male   |
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+
10 rows in set (0.00 sec)

-- filter table
mysql> select * from users where gender = "Female";
+---------+------------+-----------+--------------------------+--------------+------------+--------+
| user_id | first_name | last_name | email                    | mobile       | password   | gender |
+---------+------------+-----------+--------------------------+--------------+------------+--------+
|       3 | Jane       | Smith     | jane.smith@email.com     | 987-654-3210 | mypassword | Female |
|       5 | Alice      | Williams  | alice.williams@email.com | 333-999-0000 | pass123    | Female |
|       7 | Eva        | Davis     | eva.davis@email.com      | 111-222-3333 | strongpass | Female |
|       9 | Linda      | Taylor    | linda.taylor@email.com   | 888-777-6666 | secure123  | Female |
+---------+------------+-----------+--------------------------+--------------+------------+--------+

mysql> select * from users where gender = "Male";
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+
| user_id | first_name | last_name | email                       | mobile       | password    | gender |
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+
|       1 | brijesh    | gondaliya | brijesh.gondaliya@gmail.com | NULL         | test@123    | Male   |
|       2 | John       | Doe       | john.doe@email.com          | 123-456-7890 | securepass1 | Male   |
|       4 | bubban     | shah      | bob.johnson@email.com       | 555-123-4567 | secretword  | Male   |
|       6 | Charlie    | Brown     | charlie.brown@email.com     | 777-888-9999 | letmein     | Male   |
|       8 | Sam        | Miller    | sam.miller@email.com        | 444-555-6666 | password123 | Male   |
|      10 | Mike       | White     | mike.white@email.com        | 666-999-1111 | mypass      | Male   |
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+


mysql> update users set last_name="patel" where user_id < 6;
Query OK, 5 rows affected (0.00 sec)
Rows matched: 5  Changed: 5  Warnings: 0

mysql> select * from users;
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+
| user_id | first_name | last_name | email                       | mobile       | password    | gender |
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+
|       1 | brijesh    | patel     | brijesh.gondaliya@gmail.com | NULL         | test@123    | Male   |
|       2 | John       | patel     | john.doe@email.com          | 123-456-7890 | securepass1 | Male   |
|       3 | Jane       | patel     | jane.smith@email.com        | 987-654-3210 | mypassword  | Female |
|       4 | bubban     | patel     | bob.johnson@email.com       | 555-123-4567 | secretword  | Male   |
|       5 | Alice      | patel     | alice.williams@email.com    | 333-999-0000 | pass123     | Female |
|       6 | Charlie    | Brown     | charlie.brown@email.com     | 777-888-9999 | letmein     | Male   |
|       7 | Eva        | Davis     | eva.davis@email.com         | 111-222-3333 | strongpass  | Female |
|       8 | Sam        | Miller    | sam.miller@email.com        | 444-555-6666 | password123 | Male   |
|       9 | Linda      | Taylor    | linda.taylor@email.com      | 888-777-6666 | secure123   | Female |
|      10 | Mike       | White     | mike.white@email.com        | 666-999-1111 | mypass      | Male   |
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+

mysql> SELECT * FROM users WHERE mobile IS NULL;
+---------+------------+-----------+-----------------------------+--------+----------+--------+
| user_id | first_name | last_name | email                       | mobile | password | gender |
+---------+------------+-----------+-----------------------------+--------+----------+--------+
|       1 | brijesh    | patel     | brijesh.gondaliya@gmail.com | NULL   | test@123 | Male   |
+---------+------------+-----------+-----------------------------+--------+----------+--------+