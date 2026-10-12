#include <string>
class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        int level[s.length()];
        int counter = 0;
        bool down = true;
        for (int i = 0; i < s.length(); i++) {
            if (counter == numRows)
                down = false;
            if (counter == 1) // cant be counter == 0 edge case too late
                down = true;
            if (down)
                counter++;
            else
                counter--;

            level[i] = counter;
        }
        string temp = "";
        for (int j = 1; j < numRows + 1; j++) {
            for (int k = 0; k < s.length(); k++) {
                if (level[k] == j)
                    temp += s[k];
            }
        }
        return temp;
    }
};