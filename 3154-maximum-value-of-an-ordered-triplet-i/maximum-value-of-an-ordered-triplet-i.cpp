class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        priority_queue<long long int>p;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    p.push(((long long)(nums[i]-nums[j])*(long long)nums[k]));
                }
            }
        }
        if(p.top()<0) p.push(0);
        return p.top();
    }
};