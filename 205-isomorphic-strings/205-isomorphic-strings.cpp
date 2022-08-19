class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        
        map<char,char> m;
        
        map<char,char> n;
        
        
        
        
        if(s.size() != t.size())
            return false;
        else
        {
            
            for(int i=0;i<s.length();i++)
            {
                cout<<m.size()<<endl;
                if(m.find(s[i]) == m.end())
                {
                    m.insert({s[i],t[i]});
                
                }
                else
                {
                    if(m[s[i]] != t[i])
                    {
                        return false;
                    }
                }
                
                
                if(n.find(t[i]) == n.end())
                {
                    n.insert({t[i],s[i]});
                
                }
                else
                {
                    if(n[t[i]] != s[i])
                    {
                        return false;
                    }
                }
            }
       
        }
        
return true;
    }
};