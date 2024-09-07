class Solution:
    def reverseWords(self, s: str) -> str:
        words = list()
        w = \\

        for i in range(len(s)):
            if s[i] == ' ':
                words.append(w)
                w = \\
                continue
            w += s[i]

        if w:
            words.append(w)

        res = str()
        for i in range(len(words)):
            if words[-i-1]:
                res += words[-i-1] + ' '
                      

        return res[:-1]
            