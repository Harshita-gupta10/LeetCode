class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;
        int n = nums.size();
        for(auto num: nums)
        {
            umap[num]++;
        }
        for(auto& it: umap)
        {
            if(it.second > n/2)
                return it.first;
        }
        return 0;
    }
};