#include <vector>
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()){
            return 0;
        } else if (nums.size() == 1){
            if (nums[0] != val) {
                return 1;
            } else {
                return 0;
            }
        }
        int actualLength = nums.size() - 1;
        while  (actualLength >= 0 && nums[actualLength] == val){
            actualLength--;
        }
        if (actualLength >= 0 ){
            for (int i = 0; i < actualLength; i++){
                if (nums[i] == val) {
                    nums[i] = nums[actualLength];
                    nums[actualLength] = val;
                    while (nums[actualLength] == val){
                        actualLength--;
                    }
                }
            }
            return actualLength + 1;
        } else {
            return 0;
        }
    }
};