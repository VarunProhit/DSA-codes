class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
            return 0;
        auto found = haystack.find(needle);
        if (found != string::npos)
       return found;
        else return -1;
    }
};