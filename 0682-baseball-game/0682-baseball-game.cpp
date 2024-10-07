class Solution {
public:
    int calPoints(vector<string>& opr) {
        vector<int> v;
        for(int i=0;i<opr.size();i++){
            int sz=v.size();
            if(opr[i]!="D" && opr[i]!="C" && opr[i]!="+"){
                v.emplace_back(stoi(opr[i]));
            }
            if(opr[i]=="+"){
                v.emplace_back(v[sz-1]+v[sz-2]);
            }
            if(opr[i]=="D"){
                v.emplace_back(2*v[sz-1]);
            }
            if(opr[i]=="C"){
                v.pop_back();
            }
        }
        long long ans=accumulate(v.begin(),v.end(),0);
        return ans;
        
    }
};
