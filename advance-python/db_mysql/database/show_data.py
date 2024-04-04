from . import dbConnection
# sql = "select * from students where Gender = 'Male'"
sql = "select * from students ORDER BY StudentID DESC"
dbConnection.cursor.execute(sql)

mydata = dbConnection.cursor.fetchall()

for stu in mydata:
    print(stu)

