class Solution(object):
    def reverseWords(self, s):
        n=''
        a=''
        for i in s:
            if(i!=" "):
                a=a+i
            else:
                n=n+a[::-1]+' '
                a=''
        n=n+a[::-1]
        return n