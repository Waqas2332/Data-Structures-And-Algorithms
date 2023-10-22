nums = [0, 2, 1, 5, 3, 4]


def buildArray(nums):
    ans = [0] * len(nums)
    for num, index in enumerate(nums):
        ans[index] = nums[nums[index]]
    return ans


print(buildArray(nums))
