class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> tmp;
        
        for (int i = 0; i < nums.size(); i++)
            tmp.push_back(nums[i]);
        
        for (int i = 0; i < nums.size(); i++)
            tmp.push_back(nums[i]);
        
        return tmp;
    }
};