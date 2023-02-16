class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
       int result = 0;
        int score = values[0] + 0;
        for(int i = 1 ; i < values.size() ; i++){
            result = max(result, values[i] - i + score);
            score = max(score, values[i] + i);
        }
        return result;  
    }
};