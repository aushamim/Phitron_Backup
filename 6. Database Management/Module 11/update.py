import mysql.connector

db_name = "python_test_db"

mydbconnection = mysql.connector.connect(
    host="localhost", user="root", passwd="12345", database=db_name
)

mycursor = mydbconnection.cursor()

sqlquery = """
            UPDATE Student
            SET Name = 'KKP'
            WHERE Name = 'Kawshik Kumar Paul'
            """
mycursor.execute(sqlquery)
mydbconnection.commit()

print("Update table successful")
