class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # if(len(s) != len(t)):
        #     return False
        # return sorted(s) == sorted(t)
        
        if(len(s) != len(t)):
            return False
        ar = [0] * 26

        for i in range (len(s)):
            ar[ord(s[i]) - ord('a')] += 1
            ar[ord(t[i]) - ord('a')] -= 1
        return all( val == 0 for val in ar)