class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> doub_nums = nums;

        for(int num : nums){
            doub_nums.push_back(num);
        }

        return doub_nums;
    }
};