class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        stack<char> stk;
        
        
        for(int i=0;i<t.length();i++)
        {
            stk.push(t[i]);
        }
        
        // int count = s.length();
        
        int j=1;
        int sum =0;
        
        if(s.length() == 0 && t.length() == 0)
        {
            return true;
        }
        else if((s.length() == 0 && t.length() != 0))
                {
                return true;
                }        
        while(!stk.empty())
        {
            cout<<stk.top()<<endl;
            cout<<s[s.length()-j]<<endl;
            
            if (stk.top() == (s[s.length()-j]))
            {
                sum++;
                    j++;
            }
            
            cout<<sum<<endl;
            
            if(sum == s.length())
            {
                return true;
            }
            
            stk.pop();
            
            
        }
        


            return false;
        
        
    }
};