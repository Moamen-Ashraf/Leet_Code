class Solution:
    def daysBetweenDates(self, date1: str, date2: str) -> int:
        from datetime import date
        return abs(int((date(int(date1[0:4]), int(date1[5:7]), int(date1[8:10])) - date(int(date2[0:4]), int(date2[5:7]), int(date2[8:10]))).days))
