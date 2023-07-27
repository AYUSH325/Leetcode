class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        if ransomNote in magazine:
            return True
        if (len(ransomNote) <= len(magazine)):
            for char in ransomNote:
                if char in magazine:
                    magazine = magazine.replace(char, '', 1)
                elif char not in magazine:
                    return False
            return True
        return False