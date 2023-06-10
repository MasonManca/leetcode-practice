class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
# Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. 
# The order of the elements may be changed. Then return the number of 
# elements in nums which are not equal to val.

# Consider the number of elements in nums which are not equal to val be k, 
# to get accepted, you need to do the following things:

# Change the array nums such that the first k elements of nums contain 
# the elements which are not equal to val. The remaining elements of 
# nums are not important as well as the size of nums.
# Return k.

# Custom Judge:
# The judge will test your solution with the following code:

# int[] nums = [...]; // Input array
# int val = ...; // Value to remove
# int[] expectedNums = [...]; // The expected answer with correct length.
#                             // It is sorted with no values equaling val.

# int k = removeElement(nums, val); // Calls your implementation

# assert k == expectedNums.length;
# sort(nums, 0, k); // Sort the first k elements of nums
# for (int i = 0; i < actualLength; i++) {
#     assert nums[i] == expectedNums[i];
# }
        

    i = 0
    n = len(nums)

    # Iterate through the array
    while i < n:
    # If the current element is equal to val, remove it
        if nums[i] == val:
            nums[i] = nums[n - 1]  # Replace current element with the last element
            n -= 1  # Reduce the size of the array
        else:
            i += 1  # Move to the next element

    return n