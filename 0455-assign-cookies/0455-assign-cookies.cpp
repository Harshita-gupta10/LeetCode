static const bool Booster = [](){
    std::ios_base::sync_with_stdio(false);
    std::cout.tie(nullptr);
    std::cin.tie(nullptr);
    return true;
    }();
class Solution {
public:
    
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int m = g.size(), n = s.size();
        int ans = 0;
        int i = 0, j = 0;

        while(i < m && j < n)
        {
            if(g[i] <= s[j])
            {
                ans++;
                i++;
            } 
            j++;
        }
        return ans;
    }
};