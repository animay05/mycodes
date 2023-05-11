string= str(input("Enter the original string : "))
  
mir_dict = {'b':'d', 'd':'b', 'i':'i', 'o':'o', 'v':'v', 'w':'w', 'x':'x'}
res = ''
  
for ele in string:
    if ele in mir_dict:
        res += mir_dict[ele]
      
   
    else:
        res = "Not Possible"
        break
  
# printing result 
print("The mirror string : " + str(res)) 