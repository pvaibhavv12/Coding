n = int(input())
a = input()
b = input()
count = 0
j = 0
for i in range(n):
    if b[j] == a[i]:
        j+=1
    else:
        count = i + 1
        j = 0
print(count)