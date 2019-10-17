import math
n = int(input())
ans = 0
def multiply(forloop):
    mul = 1
    for i in forloop:
        mul *= i
    return mul
forloop = []
overflow_value = pow(2,32)
overflow = False 
while n :
    l = list(input().split())
    g = len(l)
    if g == 1 :
        if( l[0] == "add"):
            if(len(forloop)):
                ans += multiply(forloop)
            else:
                ans+=1
        else:
            forloop.pop()
        
    else:
        forloop.append(int(l[1]))
    if ans >= overflow_value:
        overflow = True
    n-=1
if(not overflow):   
    print(ans)
else:
    print("OVERFLOW!!!")
    


