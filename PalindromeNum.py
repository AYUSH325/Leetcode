class Solution:
    def isPalindrome(self, x: int) -> bool:
        if (x < 9) and (x >= 0):
            return True
        elif x < 0:
            return False
        else:
            dig_str = str(x)
            length = len(dig_str)
            for i in range(0, length // 2):
                if dig_str[i] != dig_str[length-i-1]:
                    return False
            return True
           