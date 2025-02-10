class Solution {
public:
    bool isDigit(char i)
    {
        if(i >= '0' && i <= '9')
        {
            return true;
        }
        return false;
    }
    
    string clearDigits(string s) {
        string ans = "";
        int i = 0;
        while(i < s.length())
        {
            if(!isDigit(s[i]))
                ans += s[i];
            else
                ans.pop_back();
            i++;
        }
        return ans;
    }
};