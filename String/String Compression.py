class Solution:
    def compress(self, chars):
        """
        :type chars: List[str]
        :rtype: int
        """
        ptr, wptr = 0, 0
        while ptr < len(chars):
            ch, f = chars[ptr], 0
            while ptr < len(chars) and chars[ptr] == ch:
                ptr, f = ptr+1, f+1
            chars[wptr], wptr = ch, wptr+1
            if f > 1:
                for i in str(f):
                    chars[wptr], wptr = i, wptr+1
        return wptr