import math
def bin_int(value):
    ans = 0
    c = 0
    for i in value:
        if i == '1':
            ans += 2**c
        c+=1
    #print(ans)
    return ans
n = input()
n = bin_int(n[::-1])
temp = math.log(n)/math.log(4) 
if math.ceil(temp) == math.floor(temp):
    print(math.floor(temp))
else:
    temp = temp + 1
    print(int(temp)) 