-- Export your database in specific location
:\Users\HELLO\Desktop>mysqldump -u [username] -p [old_db_name] > [new_filename].sql
Enter password: ****

-- Import database from specific location
C:\Users\HELLO\Desktop>mysql -u [username] -p [new_db_name] < [new_filename].sql
Enter password: ****
