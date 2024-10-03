class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n=nums.size();
        long long sum=0;
        for(int x:nums){
            sum+=x;
        }
        
        if(sum%p==0){
            return 0;
        }
        
        long long s=0;
        long long mini=n;
        
        map<long long,long long> m;
        m[0]=-1;
        sum%=p;
        
        for(int i=0;i<n;i++)
        {
           s+=nums[i];
            s=s%p;
           if(m.count((s-sum+p)%p))
            mini=min(mini,i-m[(s-sum+p)%p]);
            m[s%p]=i;
        }

        return (mini<n)?mini:-1;
    }
};