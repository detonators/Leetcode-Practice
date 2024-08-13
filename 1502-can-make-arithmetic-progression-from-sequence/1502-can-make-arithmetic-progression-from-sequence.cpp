#define all(x) x.begin(),x.end()

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(all(arr));
        int a=arr[0];
        int d=arr[1]-arr[0];
        
        for(int i=1;i<arr.size();i++){
            if(arr[i-1] + d != arr[i]) return false;
            
        } return true;
    }
};