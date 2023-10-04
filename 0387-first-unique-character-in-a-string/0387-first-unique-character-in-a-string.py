class Solution(object):
    def firstUniqChar(self, s):
        l=[]
        for i in s:
            l.append(s.count(i))
        for i in range(len(l)):
            if(l[i]==1):
                f=1
                return i
        return -1