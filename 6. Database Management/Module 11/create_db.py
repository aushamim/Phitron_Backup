import mysql.connector

mydbconnection = mysql.connector.connect(host="localhost", user="root", passwd="12345")
print(mydbconnection)

db_name = "python_test_db"

mycursor = mydbconnection.cursor()

sqlquery = "CREATE DATABASE " + db_name

mycursor.execute(sqlquery)
