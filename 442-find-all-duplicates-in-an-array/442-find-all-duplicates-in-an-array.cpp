class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
             vector<int>v(100009,0);
    vector<int>v1;

    set<int>x;

    for(int i=0;i<nums.size();i++)
    {
        v[nums[i]]++;
    }
        for(int i=0;i<nums.size();i++)
        {
            if(v[nums[i]]>1){
                x.insert(nums[i]);

            }
        }

for(auto itr = x.begin();itr!=x.end();++itr)
{
    v1.push_back(*itr);
}
        return v1;
        
    }
};