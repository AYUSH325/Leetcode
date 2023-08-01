class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        if (nums.size() == 1){
            return 1;
        }
        //First element i.e index 0 in array is always unique
        int curr_size = 1;
        for (int traversal = 1; traversal < nums.size(); traversal++){
            if (nums[traversal] != nums[traversal - 1]){
                nums[curr_size] = nums[traversal];
                curr_size++;
            }
        }
        return curr_size;
    }
};