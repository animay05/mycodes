num = [10,20,30,(10,20),40]
count = 0
for n in num:
    if isinstance(n, tuple):
        break
    count += 1
print(count)    