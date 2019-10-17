n = int(input())
a = list(map(int,input().split()))
m = int(input())
b = list(map(int,input().split()))
found = False
for i in a:
    for j in b:
        temp = i + j
        if temp not in a and temp not in b:
            print(i,j)
            found = True
            break
    if found:
        break