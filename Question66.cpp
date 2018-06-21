#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int overflow = 0;
        for (int i = (int) digits.size() - 1; i >= 0; i -= 1) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;
            } else {
                digits[i] = 0;
            }
        }
        vector<int> result (digits.size() + 1, 0);
        result[0] = 1;
        return result;
    }
};