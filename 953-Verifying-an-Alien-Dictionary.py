class Solution:
    def CompareStr(self, str1, str2, asci):
        for i in range(min(len(str1), len(str2))):
            if asci[str2[i]] < asci[str1[i]]:
                return False
            elif asci[str2[i]] > asci[str1[i]]:
                return True
        return len(str2) >= len(str1)

    def isAlienSorted(self, words: List[str], order: str) -> bool:
        asci = dict()
        for i in range(len(order)):
            asci[order[i]] = i

        for i in range(len(words) - 1):
            if not self.CompareStr(words[i], words[i + 1], asci):
                return False

        return True
