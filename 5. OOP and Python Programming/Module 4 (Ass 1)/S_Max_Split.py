s = input()

x = 0
y = 0
result = []
balanced = ""

for c in s:
    balanced += c

    if c == "L":
        x += 1
    elif c == "R":
        y += 1

    if x == y:
        result.append(balanced)
        balanced = ""


print(len(result))
for c in result:
    print(c)
