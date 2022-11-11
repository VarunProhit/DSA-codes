class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
       int s=0;
int sp=0;
for(int i=1;i<arr.size();++i){
if(arr[sp]!=arr[i]){
arr[s]=arr[sp];
s++;
sp=i;
}
}
arr[s]=arr[sp];
return s+1;
    }
};