t = int(input())
while(t):
    n = int(input())
    done = False
    count = 0
    while(n != 1 and not done):
        if n % 5 ==0 :
            n = (4 * n) // 5
        elif n % 3 == 0:
            n = (2 * n) // 3
        elif n % 2 == 0:
            n = n // 2
        else:
            done = True
        count+=1
    t-=1
    if n == 1:
        print(count)
    else:
        print(-1)