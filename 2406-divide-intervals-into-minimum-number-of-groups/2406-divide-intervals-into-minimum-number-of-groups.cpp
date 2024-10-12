class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        const unsigned N=1e6+2;
        int A[N]={0}, ans=0;
        for (auto& int2: intervals){
            int x=int2[0], y=int2[1]+1;
            A[x]++, A[y]--;
        }
        for (int i=1; i<N; i++){
            A[i]+=A[i-1];
            ans=max(ans, A[i]);
        }
        return ans;
    }
};
