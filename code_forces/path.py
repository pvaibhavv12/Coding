l = list(map(int,input().split()))
count = 0
for i in range(len(l)):
    for j in range(len(l)):
        if l[i] & l[j] and i != j:
            count += 1

print(count)