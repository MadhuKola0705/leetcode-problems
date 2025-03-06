class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v;
        vector<int>q;
       for(int i=0;i<grid.size();i++)
       {
           for(int j=0;j<grid[i].size();j++)
           {
               v.push_back(grid[i][j]);
           }
       }
       int f=v.size();
       sort(v.begin(),v.end());
       for(int i=0;i<v.size()-1;i++)
       {
           if(v[i]==v[i+1])
           {
               q.push_back(v[i]);
               break;
           }
       }
       set<int>s;
       for(int i=0;i<v.size();i++)
       {
           s.insert(v[i]);
       }
       v.clear();
       for(auto l:s)
       {
           v.push_back(l);
       }
       int w=0;
       for(int i=0;i<v.size();i++)
       {
           w+=v[i];
       }
       int e=(f*(f+1))*0.5;
       q.push_back(e-w);
       return q;
    }
};