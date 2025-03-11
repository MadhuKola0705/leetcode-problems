class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=matrix.size()-1;
        int k=(i+j)/2;
        int l=0;
        while(i<=j)
        {
             k=(i+j)/2;
             if(matrix[k][l]==target)
            {
                return true;
                break;
            }
            else if(matrix[k][0]>target) j=k-1;
            else if(matrix[k][matrix[0].size()-1]<target) i=k+1;
            else 
            {
                l++;
                if(l>matrix[0].size()-1) break;
            }   
        }
        return false;
    }
};