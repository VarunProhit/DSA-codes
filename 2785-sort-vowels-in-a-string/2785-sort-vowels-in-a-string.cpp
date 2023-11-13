class Solution {
public:
    string sortVowels(string s) {
        vector<pair<int,char>> v;
        for(auto x:s){
         if(x=='a' || x=='e'||x=='i' || x=='o'||x=='u' || x=='A'||x=='E' || x=='I'||x=='O' || x=='U'){
           v.push_back({x,x});
         }
        }
        sort(v.begin(),v.end());
        
        int i=0;
        for(int j=0;j<s.size();j++){
            auto x = s[j];
             if(x=='a' || x=='e'||x=='i' || x=='o'||x=='u' || x=='A'||x=='E' || x=='I'||x=='O' || x=='U'){
                s[j]=v[i].second;
                 i++;
         }
        }
        return s;
    }
};