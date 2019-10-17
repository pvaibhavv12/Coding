n = int(input())
l = list(map(int,input().split()))
ans = 0
zero_count = 0
negative_count = 0
for i in l:
    if i < 0:
        ans += (-1 - i)
        negative_count += 1
    elif i > 0:
        ans += (i - 1)
    else:
        zero_count += 1
        ans += 1
if negative_count % 2 == 1 and zero_count > 0:
    print(ans)
elif negative_count % 2 == 0:
    print(ans)
else:
    ans += 2
    print(ans)

