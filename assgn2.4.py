import re
string=str(input("Enter the string : "))

res=re.sub('[^A-Za-z0-9]+', '', string)
print("The new string is : " + res)
