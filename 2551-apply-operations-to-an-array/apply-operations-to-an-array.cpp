class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int e=nums.size();
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) 
            {
                nums.erase(nums.begin()+i);
                i=i-1;
            }
        }
        int f=e-nums.size();
        for(int i=0;i<f;i++)
        {
            nums.push_back(0);
        }
        return nums;
    }
};