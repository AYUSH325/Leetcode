class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        dict_paran = {'(':')', '{':'}', '[':']'}
        for idx in s:
            if idx in dict_paran.keys():
               stack.append(idx)
            elif len(stack) == 0 or dict_paran[stack.pop()] != idx:
                return False
        return len(stack) == 0
