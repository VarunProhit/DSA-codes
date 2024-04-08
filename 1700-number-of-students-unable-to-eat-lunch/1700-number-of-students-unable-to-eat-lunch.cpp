class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int c0=0,c1=0;
        for(auto x:students)
        {
            if(x==0)c0++;
            else c1++;
        }
        for(auto x: sandwiches){
            if(x==1)
            {
                if(c1==0)break;
                else c1--;
            }
            else if(x==0)
            {
                if(c0==0)break;
                else c0--;
            }
        }
         return c0+c1;
        
    }
};