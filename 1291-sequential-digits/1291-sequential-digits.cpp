class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        std::vector<int> result;

        for (int i = 1; i <= 9; i++) {
            int num = i;

            for (int j = i + 1; j <= 9; j++) {
                num = num * 10 + j;

                if (num >= low && num <= high) {
                    result.push_back(num);
                }
            }
        }

        std::sort(result.begin(), result.end());
        return result;
    }
};