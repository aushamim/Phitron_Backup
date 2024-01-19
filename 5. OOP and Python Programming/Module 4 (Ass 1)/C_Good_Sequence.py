n = int(input())
arr = list(map(int, input().split()))
arr.sort()

frq = {}
for num in arr:
    if num in frq:
        frq[num] += 1
    else:
        frq[num] = 1


ans = 0
for x, y in frq.items():
    if y > x:
        ans += y - x
    elif y < x:
        ans += y

print(ans)
