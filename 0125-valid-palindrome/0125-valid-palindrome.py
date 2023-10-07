class Solution(object):
    def isPalindrome(self, s):
        n=""
        for i in s:
            if(i.isalnum()):
                n=n+i
        n=n.lower()
        if n==n[::-1]:
            return True
        else:
            return False