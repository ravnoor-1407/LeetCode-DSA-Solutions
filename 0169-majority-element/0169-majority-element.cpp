class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0;
        int result = 0;
        for(int i = 0; i < nums.size(); i++) {
            if (freq == 0) {
                result = nums[i];
            }

            if (result == nums[i]) {
                freq++;
            } else {
                freq--;
            }
        }
        int count = 0;
        for (int num: nums) {
            if (num == result) {
                count++;
            } 
        }
        
        if(count > nums.size() / 2) {
            return result;
        } else {
            return -1;
        }
    }
};