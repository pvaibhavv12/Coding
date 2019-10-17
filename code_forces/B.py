n = int(input())
l = list(map(int,input().split()))
#sorted(l)
s = sorted(list(set(l)))
for i in s:
    print(i , end=" ")
print()