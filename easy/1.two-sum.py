#
# @lc app=leetcode id=1 lang=python3
#
# [1] Two Sum
#

# @lc code=start
class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = {nums[0]: 0}
        for i in range(1, len(nums)):
            if (candidate := target - nums[i]) in seen:
                return [seen[candidate], i]
            seen[nums[i]] = i
        return []

# @lc code=end

