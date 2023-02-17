class Solution {
public:
    bool isValid(string s) {
       
        stack<int> st;
        if(s.size()<=1) return false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(1);
            }
            else if(s[i]=='{'){
                st.push(2);
            }
            else if(s[i]=='['){
                st.push(3);
            }
            
            if(st.empty()){
                    return false;
            }
            if(s[i]==')'){ 
                if(st.top()==1){
                    st.pop();
                }
                else
                return false;
            }
            else if(s[i]=='}'){  
                if(st.top()==2){
                    st.pop();
                }
                else return false;
            }
            else if(s[i]==']'){
                if(st.top()==3){
                    st.pop();
                }
                else return false;
            }  
        }
        
        if(st.empty())
            return true;
        else return false;
    }
};