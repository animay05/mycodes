import math
x1=int(input("Enter x1: "))
y1=int(input("Enter y1: "))
x2=int(input("Enter x2: "))
y2=int(input("Enter y1: "))
p1 = [x1, y1]
p2 = [x2, y2]
distance = math.sqrt( ((p1[0]-p2[0])*2)+((p1[1]-p2[1])*2) )
print(distance)