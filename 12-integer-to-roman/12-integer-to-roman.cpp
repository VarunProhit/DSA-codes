class Solution {
public:
    string intToRoman(int num) {
        int divisor[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        string maps[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int idx = 12;
        string ans = "";
        while(num > 0){
            if(num >= divisor[idx]){
                int x = num/divisor[idx];
                for(int i=0; i<x;i++) ans += maps[idx];
                num = num-(x*divisor[idx]);
            }
            idx--;
        }
        return ans;
    }
};