# If the target exists, returns its leftmost index.
# Else, returns the index of where it should be.

nums = [1, 2, 3, 4,7, 8, 9]

def binarySearch(nums: list[int], target: int) -> int:
    left = 0
    right = len(nums)

    while left < right:
        middle = (left + right) // 2
        if(nums[middle] < target):
            left = middle + 1
        else:
            right = middle

    return left;

print("Testing 5, index => ")
print( binarySearch(nums, 12))