class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        compare = str(x)
        for i in range(len(compare)/2):
            if compare[i] != compare[len(compare)-1-i]:
                return False
            
        return True
        