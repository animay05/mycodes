items = []
for x in range(100,401):
    s = str(x)
    if int(s[0]) % 2 == 0 and int(s[1]) % 2 == 0 and int(s[2]) % 2 == 0:
        items.append(s)
print(" , ".join(items))