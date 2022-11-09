class StockSpanner {
public:
   vector<int> data; 
    stack<int> stk; 
    StockSpanner() {
        ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    }
    
    int next(int price) {
        data.push_back(price); 
        while(!stk.empty() && data[stk.top()] <= price){
            stk.pop(); 
        }
        if(stk.empty()){
            stk.push(data.size()-1); 
            return data.size(); 
        }
        else{
            int ind = stk.top(); 
            stk.push(data.size()-1);
            return data.size() - ind - 1; 
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */