class Solution {
public:
    int fib(int n) {
        int a[35];
        memset(a,0,sizeof(a));
        a[1] = 1;
        if(n<=1) return a[n];

        for(int i=2;i<=n;i++){

            a[i] = a[i-1] + a[i-2];

        }

        return a[n];
        
    }
};