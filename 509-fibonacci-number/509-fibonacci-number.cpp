class Solution {
public:
    int fib(int n) {
    
    int f_val = 0;
    int s_val = 1;
    int temp;

    if(n==0)
    {
        return 0;
    }

    for(int i=0;i<n-1;i++)
    {
        temp = s_val;
        s_val = s_val+f_val;
        f_val = temp;
    }
    return s_val;
        
    }
};