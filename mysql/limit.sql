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

mysql> select  * from users limit 4;
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+
| user_id | first_name | last_name | email                       | mobile       | password    | gender |
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+
|       1 | brijesh    | patel     | brijesh.gondaliya@gmail.com | NULL         | test@123    | Male   |
|       2 | John       | patel     | john.doe@email.com          | 123-456-7890 | securepass1 | Male   |
|       3 | Jane       | patel     | jane.smith@email.com        | 987-654-3210 | mypassword  | Female |
|       4 | bubban     | patel     | bob.johnson@email.com       | 555-123-4567 | secretword  | Male   |
+---------+------------+-----------+-----------------------------+--------------+-------------+--------+

mysql> select  * from users order by first_name limit 4;
+---------+------------+-----------+-----------------------------+--------------+------------+--------+
| user_id | first_name | last_name | email                       | mobile       | password   | gender |
+---------+------------+-----------+-----------------------------+--------------+------------+--------+
|       5 | Alice      | patel     | alice.williams@email.com    | 333-999-0000 | pass123    | Female |
|       1 | brijesh    | patel     | brijesh.gondaliya@gmail.com | NULL         | test@123   | Male   |
|       4 | bubban     | patel     | bob.johnson@email.com       | 555-123-4567 | secretword | Male   |
|       6 | Charlie    | Brown     | charlie.brown@email.com     | 777-888-9999 | letmein    | Male   |
+---------+------------+-----------+-----------------------------+--------------+------------+--------+

mysql> select  * from users order by first_name DESC limit 5;
+---------+------------+-----------+------------------------+--------------+-------------+--------+
| user_id | first_name | last_name | email                  | mobile       | password    | gender |
+---------+------------+-----------+------------------------+--------------+-------------+--------+
|       8 | Sam        | Miller    | sam.miller@email.com   | 444-555-6666 | password123 | Male   |
|      10 | Mike       | White     | mike.white@email.com   | 666-999-1111 | mypass      | Male   |
|       9 | Linda      | Taylor    | linda.taylor@email.com | 888-777-6666 | secure123   | Female |
|       2 | John       | patel     | john.doe@email.com     | 123-456-7890 | securepass1 | Male   |
|       3 | Jane       | patel     | jane.smith@email.com   | 987-654-3210 | mypassword  | Female |
+---------+------------+-----------+------------------------+--------------+-------------+--------+

mysql> select  * from users where gender = 'Male' order by first_name DESC limit 2;
+---------+------------+-----------+----------------------+--------------+-------------+--------+
| user_id | first_name | last_name | email                | mobile       | password    | gender |
+---------+------------+-----------+----------------------+--------------+-------------+--------+
|       8 | Sam        | Miller    | sam.miller@email.com | 444-555-6666 | password123 | Male   |
|      10 | Mike       | White     | mike.white@email.com | 666-999-1111 | mypass      | Male   |
+---------+------------+-----------+----------------------+--------------+-------------+--------+