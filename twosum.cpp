class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> mult;
        for(int i = 0; i<=nums.size(); i++){
            for(int j = i+1; j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                       mult.push_back(i);
                       mult.push_back(j);
                    j++;
                    return mult;
            }

        
        }
        
    
    }
         return mult;
    }
};