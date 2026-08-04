a,b=map(str,input().split())
a=int(a)
c=1
for i in range(a,1,-len(b)):
    c*=i
print(c)
