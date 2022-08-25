
class Solution {
public:
    int firstBadVersion(int n) {
    
    int l=1;
    int r=n;
    int ans,m;

    while(l<=r)
    {
         m = l + (r - l) / 2;
        
        if(isBadVersion(m)==true)
        {
            ans = m;
            r = m-1;
        }
        else
            l=m+1;

    }
    return ans;
    }
};