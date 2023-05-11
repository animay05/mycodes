def histrogram(nums):
 for x in nums:
  output = ''
  while x > 0:
   output = output + "-"
   x = x - 1
  print(output)
num=int(input("Enter number: "))
res = [int(x) for x in str(num)]
histrogram(res)