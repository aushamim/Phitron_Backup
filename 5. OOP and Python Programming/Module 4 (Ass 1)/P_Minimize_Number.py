n = int(input())
arr = list(map(int, input().split()))

count = 0
ev = 0
while ev == 0:
    for i in range(n):
        if arr[i] % 2 == 0:
            arr[i] = arr[i] // 2
        else:
            ev = 1
            break
    if ev == 0:
        count += 1


print(count)
