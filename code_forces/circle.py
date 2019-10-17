n = int(input())
n = 2 * n
temp = []
i = 0
while i < n :
    temp.append(i+1)
    i += 2
i = 1
while i <= n :
    temp.append(i+1)
    i += 2
old_n = n // 2
i = 1
while old_n + i < n :
    a = temp[i]
    temp[i] = temp[old_n + i]
    temp[old_n + i] = a
    i += 2
if temp[n - 1] == n:
    print("YES")
    for j in temp:
        print(j,end=" ")
    print()
else:
    print("NO")
