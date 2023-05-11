from random import randint
correct_guess=randint(1,9)
my_guess=int(input("Enter:"))
while my_guess>=1 and my_guess<=9:
    if my_guess==correct_guess:
     print("Correct")
     break
    else: 
     print("Try again")
     my_guess=int(input("Enter:")) 
     continue
