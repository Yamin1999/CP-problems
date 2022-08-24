class Solution {
public:
    int longestPalindrome(string s) {
        
            vector<int>v(52,0);
        
            int max_profit = 0;
            int max_odd=0;
        
            int flag =0;
        
        cout<<s.length()<<endl;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]< 'a')
            {
                v[s[i]-'A']++;
            }
            else
            v[s[i]-'a'+26]++;
        }
        
        
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i]%2==0)
            {
                max_profit+=v[i];
            }
            else
            {
                flag = 1;
                max_profit+= v[i]-1;
            }
        }
        
        cout<<max_profit<<ends<<max_odd<<endl;
        
        return (max_profit+max_odd+flag);
    }
};