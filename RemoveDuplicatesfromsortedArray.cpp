class Solution {
public:
     int removeDuplicates(vector<int>& nums) {
       if (nums.empty()) {
            return 0; // If the vector is empty, there are no duplicates to remove.
        }

        int newSize = 1; // Initialize the new size of the array to 1 (assuming the first element is unique).

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[newSize] = nums[i]; // Move unique elements to the front of the vector.
                newSize++;
            }
        }

        return newSize;
    }
};