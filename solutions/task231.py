a=input()
q=0
while(q<len(a)):
    if(not a[q].isdigit()):
        a=a[:q+1]+"-"+a[q+1:]
        q+=1
    q+=1
b=a.split("-")
s=""
for t in b:
    if t=="":
        continue
    if(len(t)==1):
        s=s+t[-1]
        continue
    for i in range(int(t[:-1])):
        s=s+t[-1]
z=0
for i in range(len(s)):
    if(z==40):
        print()
        z=0
    z+=1
    print(s[i],end="")
