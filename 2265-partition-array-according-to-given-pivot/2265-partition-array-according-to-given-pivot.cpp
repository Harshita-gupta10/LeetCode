class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int pivotCount = 0;
        vector<int> right;
        vector<int> left;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == pivot)
            {
                pivotCount++;
            }
            else if(nums[i] < pivot)
            {
                left.push_back(nums[i]);
            }
            else
            {
                right.push_back(nums[i]);
            }
        }
        while(pivotCount)
        {
            left.push_back(pivot);
            pivotCount--;
        }
        for(int k = 0; k < right.size(); k++)
        {
            left.push_back(right[k]);
        }
        return left;
    }
};