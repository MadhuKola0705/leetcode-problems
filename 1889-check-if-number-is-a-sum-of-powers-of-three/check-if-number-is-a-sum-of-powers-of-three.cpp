class Solution {
public:
    bool checkPowersOfThree(int n) {
        string s="";
        while(n!=0)
        {
            s+=to_string(n%3);
            n/=3;
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='2')
            {
                return false;
                break;
            }
        }
        return true;
    }
};