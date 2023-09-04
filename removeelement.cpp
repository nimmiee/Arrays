class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) {
            return 0; 
        }
        int newsize = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]!= val ){
                nums[newsize] = nums[i];// Move non-matching elements to the front.
                newsize++;
            }
        }
        return newsize;
    }
};