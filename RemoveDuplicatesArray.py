class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 1
        insert_index = 1
        while i < len(nums):
            if nums[i] != nums[i - 1]:
                nums[insert_index] = nums[i]
                insert_index += 1
            i += 1
        return insert_index