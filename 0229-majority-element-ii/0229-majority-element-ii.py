class Solution(object):
    def majorityElement(self, nums):
        v=[]
        n=len(nums)
        for i in range(0,n,1):
            c=nums.count(nums[i])
            if(c>n/3 and nums[i] not in v):
                    v.append(nums[i])
        return v