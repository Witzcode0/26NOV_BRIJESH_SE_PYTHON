mysql> show tables;
Empty set (0.00 sec)

-- create table [table_name](field_1 configuration, field_2 configuration,...field_n configuration);

create table departments(department_id int auto_increment primary key, name varchar(255));
Query OK, 0 rows affected (0.03 sec)

mysql> show tables;
+-------------------+
| Tables_in_company |
+-------------------+
| departments       |
+-------------------+
1 row in set (0.00 sec)


mysql> describe departments;
+---------------+--------------+------+-----+---------+----------------+
| Field         | Type         | Null | Key | Default | Extra          |
+---------------+--------------+------+-----+---------+----------------+
| department_id | int          | NO   | PRI | NULL    | auto_increment |
| name          | varchar(255) | YES  |     | NULL    |                |
+---------------+--------------+------+-----+---------+----------------+

mysql> select * from departments;
Empty set (0.00 sec)