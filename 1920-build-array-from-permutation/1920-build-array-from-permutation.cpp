class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> tmp;
        for (int i = 0; i < nums.size(); i++)
            tmp.push_back(nums[nums[i]]); 
        return tmp;
    }
};