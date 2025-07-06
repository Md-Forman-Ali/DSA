class Solution {
public:
    void sortss(vector<int>& nums )
    {
        sort(nums.begin(),nums.end());
    }
    vector<int> sortArray(vector<int>& nums) {
        sortss(nums);
        return nums;
    }
};