class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int c=0;
        string f;
       priority_queue<int,vector<int>,greater<int>>p;
       for(int i=0;i<strs.size();i++)
       {
         p.push(strs[i].size());
       }
       for(int i=0;i<p.top();i++)
       {
          for(int j=0;j<strs.size()-1;j++)
          {
             if(strs[j][i]==strs[j+1][i]) c+=1;
          }
          if(c==strs.size()-1) f+=strs[0][i];
          else break;
          c=0;
       }
       return f;
    }
};