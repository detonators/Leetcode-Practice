#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define ADJ map<int,set<int>>
#define vpii vector<pii>
#define pb push_back
#define ed end()
#define bg begin()
#define sz size()
#define ln length()
#define all(x) x.begin(),x.end()
#define endl '\n'
#define NL cout << '\n';
#define F first
#define S second
#define TT third
#define disp(x) for(auto t : x )cout<<t<<" ";
#define for0(n) for(int i = 0 ; i < n ; i++)
#define for0j(n) for(int j = 0 ; j < n ; j++)
#define oldfor(v) for(auto it = v.begin(); it != v.end(); ++it)
#define SS << ' ' <<
#define acum accumulate
#define arrin(a,n) vi a(n);for0(n){cin >> a[i];}
#define arrinp(a,n) vpii a(n);for0(n){cin >> a[i].F;a[i].S=i;}
#define pf(x) cout << x << endl;
#define Check pf("Check")
#define gridin(num,n,m) for0(n){for0j(m) cin >> num[i][j];}
#define dispgrid(num,n,m) for0(n){for0j(m) cout << num[i][j] << ' '; cout << endl;}

template<typename F, typename S>
ostream& operator<<(ostream& os,const pair<F,S> &p){return os << "(" << p.F << ", " << p.S << ")";}

template < typename T >
ostream &operator<<(ostream &os,const vector<T> &v){os<< "{";oldfor(v){if(it!=v.bg)os<<", ";os<<*it;}return os << "}";}

template < typename T >
ostream &operator << (ostream &os, const set<T> &v){os << "[";oldfor(v){if(it!=v.bg)os<< ", ";os << *it;}return os << "]";}

template < typename T >
ostream &operator << (ostream &os, const multiset<T> &v){os << "[";oldfor(v){if(it!=v.bg) os << ", ";os<<*it;}return os << "]";}

template < typename F, typename S >
ostream &operator <<(ostream & os, const map<F,S> &v){os << "[";oldfor(v){if(it!=v.bg)os<< ", ";os<< it->F<<" = "<<it->S;}return os << "]";}



class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if(s.empty() || s[0].empty()) return "";
        int minl = s[0].sz;
        for(auto& a: s) minl = min(minl, (int)a.sz);
        string ans;
        for0(minl){
            char cur = s[0][i];
            for(int j=1; j<(int)s.sz; j++){
                if(s[j][i] != cur) { return ans;}
            }
            ans += cur;
        }
        return ans;        
        }    
};