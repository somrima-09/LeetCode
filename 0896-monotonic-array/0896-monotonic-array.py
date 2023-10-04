class Solution(object):
    def isMonotonic(self, nums):
        i=sorted(nums)
        d=list(reversed(i))
        if(nums==i or nums==d):
            return True
        else:
            return False
            