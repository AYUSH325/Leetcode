class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        max_wealth = 0
        for i in accounts:
            if max_wealth < sum(i):
                max_wealth = sum(i)
        return max_wealth
