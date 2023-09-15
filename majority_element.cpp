using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // My Solution - does not work for insanity tests
        // int index = 0;
        // int curr = nums[index];
        // int count = 0;
        // if (nums.size() == 1) {
        //     return nums[0]; 
        // }
        // while (count <  nums.size() / 2){
        //     for (int traverse = index; traverse < nums.size(); traverse++) {
        //         if (nums[traverse] == curr){
        //             count++;
        //         }
        //     }
        //     if (count > nums.size() / 2){
        //         return curr;
        //     } else {
        //         count = 0;
        //         index++;
        //         curr = nums[index];
        //     }
        // }
        // return 0;
        
        // Sort the array and return the element at index n/2 since element appears more than n/2 times.
        // int length = nums.size(); 
        // sort(nums.begin(), nums.end());
        // return nums[length / 2];

        // Moore Voting Algorithm
        int count = 0;
        int candidate = 0;

        for (int i = 0; i < nums.size(); i++){
            if (count == 0){
                candidate = nums[i];
                count++;   
            } else if (nums[i] == candidate){
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};