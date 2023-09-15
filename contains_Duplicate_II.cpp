using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> utracker;
        for (int i = 0; i < nums.size(); i++) {
            if (utracker.find(nums[i]) != utracker.end()){
                auto it = utracker.find(nums[i]);
                if (abs(it->second - i) <= k){
                    return true;
                } else {
                    it->second = i;
                }
            } else {
                utracker[nums[i]] = i;
            }
        }
        return false;
    }
};