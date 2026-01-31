#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string word) {
        int len = static_cast<int>(word.length()), i, vow = 0, cons = 0;
        if (len < 3) return false;
        for (i=0; i<len; i++) {
            if (isalnum(word[i]) == 0) return false;
            if (isdigit(word[i])) continue;
            if (word[i] >= 65 && word[i] <= 90) {
                if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') vow++;
                else cons++;
            } else if (word[i] >= 97 && word[i] <= 122) {
                if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u') vow++;
                else cons++;
            }
        }

        if (vow == 0 || cons == 0) return false;
        return true;
    }
};