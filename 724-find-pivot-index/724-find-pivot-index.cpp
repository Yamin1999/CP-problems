class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        map<int, set<int>> m;
        set<int>s;
        
        int before_sum = 0;
        int after_sum = 0;
        int total_sum =0;
        
        
        for(int i=0;i<nums.size();i++)
        {
            total_sum+=nums[i];    
        }
        
        for(int i=0;i<nums.size();i++)
        {
            
            after_sum = total_sum - before_sum-nums[i];
            
            cout<<before_sum<<"    "<<after_sum<<endl;
            
            s.insert(before_sum);
            s.insert(after_sum);
            
            m.insert({i,s});
            before_sum+=nums[i]; 
               
            s.clear();
        }
        
        cout<<m.size()<<endl;
        
        for(int i = 0;i<m.size();i++)
        {
            cout<<m[i].size()<<ends;
            if(m[i].size()==1)
            {
                return i;
            }
        }
        
        return -1;
    }
};