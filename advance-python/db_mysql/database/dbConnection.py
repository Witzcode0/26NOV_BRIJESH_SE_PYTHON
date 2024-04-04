import mysql.connector

db = mysql.connector.connect(
    host="localhost",
    user="root",
    password="root",
    database='college'
)

cursor = db.cursor()