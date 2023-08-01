class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        comm_str = min(strs, key=len)
        for word in strs:
            while comm_str != "":
                if word.startswith(comm_str):
                    break
                else:
                    comm_str = comm_str[:-1]
        return comm_str