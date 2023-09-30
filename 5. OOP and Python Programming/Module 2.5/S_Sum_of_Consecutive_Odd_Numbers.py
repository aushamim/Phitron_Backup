t = int(input())

while t > 0:
    t -= 1
    x, y = map(int, input().split())
    sum = 0
    for i in range(min(x, y) + 1, max(x, y)):
        if i % 2 != 0:
            sum += i
    print(sum)
