class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        # s = set()

        # for x in nums:
        #     if x in s:
        #         return True
        #     s.add(x)

        # return False
        return len(nums) != len(set(nums))