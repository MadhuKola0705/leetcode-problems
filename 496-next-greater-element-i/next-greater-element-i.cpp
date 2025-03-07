class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        priority_queue<int>p;
        vector<int>v;
       for(int i=0;i<nums1.size();i++)
       {
        int m=0;
          for(int j=0;j<nums2.size();j++)
          {
            if(nums1[i]==nums2[j])
            {
                m=j;
                break;
            }
          }
          int c=0;
         for(int j=m+1;j<nums2.size();j++)
         {
            c=0;
            if(nums1[i]<nums2[j])
            {
                v.push_back(nums2[j]);
                c+=1;
                break;
            }
         }
         if(c==0) v.push_back(-1);
       }
       return v;
    }
};