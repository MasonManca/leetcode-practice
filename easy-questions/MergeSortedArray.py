# You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, 
# and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

# Merge nums1 and nums2 into a single array sorted in non-decreasing order.

# The final sorted array should not be returned by the function, but instead be stored inside the array nums1. 
# To accommodate this, nums1 has a length of m + n,
#  where the first m elements denote the elements that should be merged, 
#  and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

# Example 1:

# Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
# Output: [1,2,2,3,5,6]
# Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
# The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

class Solution(object):
    def merge(self, nums1, m, nums2, n):
        # nums1[m:] = nums2[:n]
        # nums1.sort()
        # return nums1
        nums1[:] = sorted(nums1[:m] + nums2)
        return nums1

# nums1[:m] extracts the first m elements from nums1. Since m represents the number of elements in nums1 that are already sorted, this operation ensures that only the sorted portion of nums1 is considered for merging.

# nums2 represents the second sorted array that needs to be merged with nums1.

# nums1[:m] + nums2 concatenates the two arrays, combining the sorted portion of nums1 and nums2 into a single array.

# sorted() sorts the concatenated array in ascending order.

# Finally, nums1[:] = ... assigns the sorted array back to nums1. The use of [:] ensures that the original array is modified in-place.


# Method 2:
for i in range(n):
    nums1[m+i] = nums2[i]
nums1.sort()