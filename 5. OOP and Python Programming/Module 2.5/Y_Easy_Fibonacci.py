n = int(input())
fib = []
for i in range(0, n):
    if i == 0 or i == 1:
        fib.append(i)
        print(fib[i], end=" ")
    else:
        fib.append(fib[i - 1] + fib[i - 2])
        print(fib[i], end=" ")
