import math
a,b,c=map(int,input().split())
d,e,f=map(int,input().split())
if c+f>=math.sqrt((d-a)*(d-a)+(e-b)*(e-b)) and abs(c-f)<=math.sqrt((d-a)*(d-a)+(e-b)*(e-b)):
    print("YES")
else:
    print("NO")
