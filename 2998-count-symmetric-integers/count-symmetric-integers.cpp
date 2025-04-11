class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int s=0,q=0,v=0;
        for(int i=low;i<=high;i++)
        {
            string f=to_string(i);
            if(f.size()%2==0)
            {
                for(int j=0;j<(f.size()/2);j++)
                {
                    s+=(f[j]-'0');
                }
                for(int j=(f.size()/2);j<f.size();j++)
                {
                    q+=(f[j]-'0');
                }
                if(s==q) v+=1;
            }
            s=0,q=0;
        }
        return v;
    }
};