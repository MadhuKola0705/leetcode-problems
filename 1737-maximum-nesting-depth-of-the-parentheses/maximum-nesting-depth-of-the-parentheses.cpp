class Solution {
public:
    int maxDepth(string s) {
        stack<int>v;
        priority_queue<int>p;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') 
            {
                v.push(s[i]);
                p.push(v.size());
            }
            else if(s[i]==')') v.pop();
        }
        if(p.size()==0) p.push(0);
        return p.top();
    }
};