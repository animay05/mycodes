def repeat_times(n):
 s = 0
 n_str = str(n)
 while (n > 0):
  n -= sum([int(i) for i in list(n_str)])
  n_str = list(str(n))
  s += 1
  return s
z=int(input("Enter number: "))
print(repeat_times(z))