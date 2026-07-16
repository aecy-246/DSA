class Solution:
    def minimumCost(self, nums: list[int], k: int) -> int:
        res = k
        answer = 0
        flag = 0
        for i in range(0, len(nums)):
            if(nums[i]<res):
                res = res-nums[i]
            else:
                need = nums[i] - res
                rem = (need + k - 1) // k
                flag = flag+rem
                res = res +(k*rem)
                res = res - nums[i]
        answer = flag * (flag + 1) // 2
        return answer % (10**9+7)