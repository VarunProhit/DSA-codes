class Solution {
public:
    int minAddToMakeValid(string s) {
        int re=0,a=0;
        for(auto x:s){
            if(x=='(')a++;
            else{
                if(a)a--;
                else re++;
            }
        }
        return re+a;
    }
};