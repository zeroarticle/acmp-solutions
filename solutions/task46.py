a = int(input())
b = "2.71828182845904523536028750"
if(a!=0):
    print(b[0:a+1] + str(int(b[a+1]) + (int(b[a+2]) >= 5)))
else:
    print(3)
