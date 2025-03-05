class Solution {
public:
    long long coloredCells(int n) {
        long long s=0;
        for(int i=1;i<n;i++)
        {
            s+=4*i;
        }
        return s+1;
    }
};