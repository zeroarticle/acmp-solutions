a,b=map(int,input().split())
k=[]
k.append(1)
for i in range(1,b+1):
    c=0
    for j in range(a):
        if i-(j+1)<0:
            break
        c+=k[i-(j+1)]
    k.append(c)
print(k[-1])
