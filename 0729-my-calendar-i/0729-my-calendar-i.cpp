class MyCalendar {
    using int2 = pair<int, int>;
    set<int2> S;
public:
    MyCalendar() { }
    bool book(int start, int end) {
        auto it=S.lower_bound({start, -1});
        if (it != S.end() && (*it).first<end) return 0;
        if (it != S.begin() && (*prev(it)).second > start)  return 0;
        S.insert({start, end}); return 1;
    }
};



/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */