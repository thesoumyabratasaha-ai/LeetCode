class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.size();
        int count = 0;
        for (int i = len - 1; i > -1; i--) {
            if (s[i] != ' ')
                count++;
            if (s[i] == ' ' && count != 0)
                break;
        }
        if (count == 0)
            return 1;
        return count;
    }
};