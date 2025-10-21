class Solution {
public:
    bool isIncreasing(vector<int>& nums, int firstIndex, int lastIndex)
    {
        for(int i = firstIndex; i < lastIndex-1; i++)
        {
            if(nums[i] >= nums[i+1])
            {
                return false;
            }
        }
        return true;
    }
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int start = 0;
        for(int start = 0; start+2*k <= n; start++)
        {
            bool first = isIncreasing(nums, start, start+k);
            bool second = isIncreasing(nums, start+k, start+2*k);
            if(first == true && second == true)
            {
                return true;
            }
        }
        return false;
    }
};