def rev_number(n):
 s = 0
 while True:
  k = str(n)
  if k == k[::-1]:
     break
  else:
   m = int(k[::-1])
   n += m
   s += 1
 return n
num=int(input("Enter number: "))
print(rev_number(num))