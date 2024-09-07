class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        d = Counter(magazine)
        
        for i in ransomNote:
            if d[i]:
                d[i] -= 1
            else:
                break
        else:
            return True

        return False