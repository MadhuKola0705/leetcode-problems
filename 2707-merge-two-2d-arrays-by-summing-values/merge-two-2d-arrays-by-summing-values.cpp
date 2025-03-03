class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<int>q;
        vector<vector<int>>v;
        int s=0,i=0,j=0;
       while(1){
            if(nums1[i][0]==nums2[j][0])
                {
                    s=nums1[i][1]+nums2[j][1];
                    q.push_back(nums1[i][0]);
                    q.push_back(s);
                    j++;
                    i++;
                    s=0;
                } 
                else if(nums1[i][0]<nums2[j][0])
                {
                    q.push_back(nums1[i][0]);
                    q.push_back(nums1[i][1]);
                    i++;
                }
                else if(nums1[i][0]>nums2[j][0])
                {
                    q.push_back(nums2[j][0]);
                    q.push_back(nums2[j][1]);
                    j++;
                }
                v.push_back(q);
                q.clear();
                if(i==nums1.size() || j==nums2.size()) break;
        }
        if(j!=nums2.size())
        {
            for(int k=j;k<nums2.size();k++)
            {
                q.push_back(nums2[k][0]);
                q.push_back(nums2[k][1]);
                v.push_back(q);
                q.clear();
            }
        }
        if(i!=nums1.size())
        {
            for(int k=i;k<nums1.size();k++)
            {
                q.push_back(nums1[k][0]);
                q.push_back(nums1[k][1]);
                v.push_back(q);
                q.clear();
            }
        }
        return v;
    }
};