mysql> create database instagram;
Query OK, 1 row affected (0.01 sec)

mysql> use instagram;
Database changed

mysql> create table users(user_id int auto_increment primary key, first_name varchar(255), last_name varchar(255), email varchar(255) unique, mobile varchar(50) unique, password varchar(255));
Query OK, 0 rows affected (0.04 sec)

mysql> describe users;
+------------+--------------+------+-----+---------+----------------+
| Field      | Type         | Null | Key | Default | Extra          |
+------------+--------------+------+-----+---------+----------------+
| user_id    | int          | NO   | PRI | NULL    | auto_increment |
| first_name | varchar(255) | YES  |     | NULL    |                |
| last_name  | varchar(255) | YES  |     | NULL    |                |
| email      | varchar(255) | YES  | UNI | NULL    |                |
| mobile     | varchar(50)  | YES  | UNI | NULL    |                |
| password   | varchar(255) | YES  |     | NULL    |                |
+------------+--------------+------+-----+---------+----------------+
6 rows in set (0.00 sec)


mysql> alter table users modify password varchar(255) not null;
Query OK, 0 rows affected (0.06 sec)
Records: 0  Duplicates: 0  Warnings: 0

alter table users add gender varchar(10) not null;
Query OK, 0 rows affected (0.06 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> alter table users add is_active boolean default true;
Query OK, 0 rows affected (0.02 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> alter table users drop is_active;
Query OK, 0 rows affected (0.03 sec)
Records: 0  Duplicates: 0  Warnings: 0

mysql> describe users;
+------------+--------------+------+-----+---------+----------------+
| Field      | Type         | Null | Key | Default | Extra          |
+------------+--------------+------+-----+---------+----------------+
| user_id    | int          | NO   | PRI | NULL    | auto_increment |
| first_name | varchar(255) | YES  |     | NULL    |                |
| last_name  | varchar(255) | YES  |     | NULL    |                |
| email      | varchar(255) | YES  | UNI | NULL    |                |
| mobile     | varchar(50)  | YES  | UNI | NULL    |                |
| password   | varchar(255) | NO   |     | NULL    |                |
| gender     | varchar(10)  | NO   |     | NULL    |                |
+------------+--------------+------+-----+---------+----------------+


mysql> CREATE TABLE posts (
    ->     post_id INT AUTO_INCREMENT PRIMARY KEY,
    ->     title VARCHAR(255) NOT NULL,
    ->     content VARCHAR(255),
    ->     user_id INT,
    ->     FOREIGN KEY (user_id) REFERENCES users(user_id)
    -> );
Query OK, 0 rows affected (0.06 sec)


mysql> describe posts;
+---------+--------------+------+-----+---------+----------------+
| Field   | Type         | Null | Key | Default | Extra          |
+---------+--------------+------+-----+---------+----------------+
| post_id | int          | NO   | PRI | NULL    | auto_increment |
| title   | varchar(255) | NO   |     | NULL    |                |
| content | varchar(255) | YES  |     | NULL    |                |
| user_id | int          | YES  | MUL | NULL    |                |
+---------+--------------+------+-----+---------+----------------+


create table comment(comment_id int auto_increment primary key, content varchar(255), user_id INT, post_id INT, FOREIGN KEY (user_id) REFERENCES users(user_id), FOREIGN KEY (post_id) REFERENCES posts(post_id));
Query OK, 0 rows affected (0.06 sec)

mysql> describe comment;
+------------+--------------+------+-----+---------+----------------+
| Field      | Type         | Null | Key | Default | Extra          |
+------------+--------------+------+-----+---------+----------------+
| comment_id | int          | NO   | PRI | NULL    | auto_increment |
| content    | varchar(255) | YES  |     | NULL    |                |
| user_id    | int          | YES  | MUL | NULL    |                |
| post_id    | int          | YES  | MUL | NULL    |                |
+------------+--------------+------+-----+---------+----------------+


mysql> CREATE TABLE post_like (
    ->     like_id INT AUTO_INCREMENT PRIMARY KEY,
    ->     user_id INT,
    ->     post_id INT,
    ->     like_status BOOLEAN DEFAULT TRUE,
    ->     FOREIGN KEY (user_id) REFERENCES users(user_id),
    ->     FOREIGN KEY (post_id) REFERENCES posts(post_id)
    -> );
Query OK, 0 rows affected (0.04 sec)

mysql> describe post_like;
+-------------+------------+------+-----+---------+----------------+
| Field       | Type       | Null | Key | Default | Extra          |
+-------------+------------+------+-----+---------+----------------+
| like_id     | int        | NO   | PRI | NULL    | auto_increment |
| user_id     | int        | YES  | MUL | NULL    |                |
| post_id     | int        | YES  | MUL | NULL    |                |
| like_status | tinyint(1) | YES  |     | 1       |                |
+-------------+------------+------+-----+---------+----------------+