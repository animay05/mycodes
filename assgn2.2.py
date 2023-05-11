string1 = str(input("Enter the 1st string : "))
string2 = str(input("Enter the 2nd string : "))

res = False
for idx in range(len(string1)):
        if string1[idx: ] + string2[ :idx] == string2:
            res = True
            break

print ("Are the two strings Rotationally Equal? : " + str(res))        