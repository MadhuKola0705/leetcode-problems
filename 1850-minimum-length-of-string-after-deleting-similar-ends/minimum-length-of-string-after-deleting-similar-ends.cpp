class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.size()-1,c=0;
        string f="",q="";
        while(i<j)
        {
            if(s[i]==s[j] && s[i]==s[i+1] && (i+1)!=j) 
            {
                c+=1;
                i++;
            }
            else if(s[i]==s[j] && s[j]==s[j-1] && (j-1)!=i)
            {
                c+=1;
                j-=1;
            }
            else if(s[i]==s[j] && s[i]!=s[i+1] && s[j]!=s[j-1])
            {
                c+=2;
                i++;
                j--;
            }
            else if(s[i]==s[j] && i+1==j)
            {
                c+=2;
                i++;
                j--;
            }
            cout<<c<<" ";
            if(s[i]!=s[j]) break;
        }
        return s.size()-c;
    }
};