# Args
# Tuple akare extra gula thakbe
# def sun(*args):
#     for x in args:


def sum(*nums):
    sum = 0
    for num in nums:
        sum += num
    return sum


print(sum(1, 2, 3, 4, 5))

# K-args | Kargs
# Dictionary akare thake (Object)


def name(first, last, **addition):
    for key, value in addition.items():
        print(key, value)


name(first="Alu", last="Mia", title="Deshi", fName="Khan")
