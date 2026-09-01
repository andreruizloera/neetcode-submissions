class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       set<int> seen;   // create an empty set

        for (int i = 0; i < nums.size(); i++) {
            int value = nums[i];  // the current number in the array

            // check if we've seen this number before
            if (seen.count(value)) {
                return true;      // duplicate found
            }

            // otherwise insert it into the set
            seen.insert(value);
        }

        return false;             // no duplicates in the entire vector
    } 
};