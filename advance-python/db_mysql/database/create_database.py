from . import dbConnection

database_name = input("Enter database name: ")
sql = f"create database {database_name}"
dbConnection.cursor.execute(sql)