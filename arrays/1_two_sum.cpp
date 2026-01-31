#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int number = target - nums[i];
            
            if (mp.count(number)) return {mp[number], i};

            mp[nums[i]] = i;
        }

        return {-1, -1};
    }
};