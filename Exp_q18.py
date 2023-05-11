def absent_digits(n):
 all_nums = set([0,1,2,3,4,5,6,7,8,9])
 n = set([int(i) for i in n])
 n = n.symmetric_difference(all_nums)
 n = sorted(n)
 return n
num=int(input("Enter number: "))
res = [int(x) for x in str(num)]
print(absent_digits(res))