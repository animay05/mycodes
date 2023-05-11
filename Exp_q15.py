def test_distinct(data):
 if len(data) == len(set(data)):
  return True
 else:
  return False;
num=int(input("Enter number: "))
res = [int(x) for x in str(num)]
print(test_distinct(res))