def sum(*arg):
    s = 0
    for x in arg:
        s += x
    return s


print(sum(1, 2, 3, 4, 5))


def full_name(**kwargs):
    name = ""
    if "first" in kwargs:
        name += kwargs["first"]
        name += " "
    if "middle" in kwargs:
        name += kwargs["middle"]
        name += " "
    if "last" in kwargs:
        name += kwargs["last"]
        name += " "
    return name


print(full_name(first="Amjad", middle="Uddin", last="Shamim"))
