t = input()

for i in range(0, int(t)):
    nums = input()
    for j in range(len(nums) - 1, -1, -1):
        print(nums[j], end=" ")
    print()
