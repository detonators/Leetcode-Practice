/* class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>,vector<pair<int,char>>>pq;
        if(a) pq.push({a,'a'});
        if(b) pq.push({b,'b'});
        if(c) pq.push({c,'c'});
        
        string ans="";
        char last='e';
        while(!pq.empty()){
            int maxi=pq.top().first;
            char c=pq.top().second;
            pq.pop();
            if(last!=c){
                last=c;
                int x=min(2,maxi);
                maxi-=x;
                while(x--) ans.push_back(c);
                if(maxi) pq.push({maxi,c});    
            }
            else{
                if(pq.empty()) return ans;
                int newMaxi=pq.top().first;
                char newC=pq.top().second;
                pq.pop();
                last=newC;
                int x=min(1,newMaxi);
                newMaxi-=x;
                while(x--) ans.push_back(newC);
                if(newMaxi) pq.push({newMaxi,newC});
                if(maxi) pq.push({maxi,c});
            }
        } return ans;
    }
}; */

class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string res="";
        int size = a + b + c;
        int A = 0, B = 0, C = 0;
        for(int i = 0; i < size; i++) {
            if ((a >= b && a >= c && A != 2) || (B == 2 && a > 0) || (C == 2 && a > 0)){
                res+="a";
                a--,A++,B = 0,C = 0;  
            }else if ((b >= a && b >= c && B != 2) || (A == 2 && b > 0) || (C == 2 && b > 0)){
                res+="b";
                b--,B++,A = 0,C = 0;
            }else if ((c >= a && c >= b && C != 2) || (B == 2 && c > 0) || (A == 2 && c > 0)){
                res+="c";
                c--,C++,A = 0,B = 0;  
            }
        }
        return res;
    }
};