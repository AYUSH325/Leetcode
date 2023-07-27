class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        weakest = []
        ones_count = []
        n = 0
        for i in mat:
            ones_count.append(i.count(1))
        while n < k:
            value = min(ones_count)
            min_index = ones_count.index(value)
            weakest.append(min_index)
            ones_count[min_index] = 10000
            n += 1
        return weakest