x, n = map(int, input().split())
sum = 0
for i in range(0, n + 1):
    if i == 0:
        sum += (x**i) - 1
    else:
        if i % 2 == 0:
            sum += x**i
print(sum)
