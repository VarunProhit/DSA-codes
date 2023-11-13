// class Solution {
// public:
//     string sortVowels(string s) {
//         vector<pair<int,char>> v;
//         for(auto x:s){
//          if(x=='a' || x=='e'||x=='i' || x=='o'||x=='u' || x=='A'||x=='E' || x=='I'||x=='O' || x=='U'){
//            v.push_back({x,x});
//          }
//         }
//         sort(v.begin(),v.end());
        
//         int i=0;
//         for(int j=0;j<s.size();j++){
//             auto x = s[j];
//              if(x=='a' || x=='e'||x=='i' || x=='o'||x=='u' || x=='A'||x=='E' || x=='I'||x=='O' || x=='U'){
//                 s[j]=v[i].second;
//                  i++;
//          }
//         }
//         return s;
//     }
// };
class Solution {
public:
    // Returns true if the character is a vowel.
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'o'|| c == 'u'|| c == 'i' 
            || c == 'A' || c == 'E' || c == 'O'|| c == 'U'|| c == 'I';
    }
    
    string sortVowels(string s) {
        unordered_map<char, int> count;

        // Store the frequencies for each character.
        for (char c : s) {
            if (isVowel(c)) {
                count[c]++;
            }
        }

        // Sorted string having all the vowels.
        string sortedVowel = "AEIOUaeiou";
        string ans;
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (!isVowel(s[i])) {
                ans += s[i];
            } else {
                // Skip to the character which is having remaining count.
                while (count[sortedVowel[j]] == 0) {
                    j++;
                }

                ans += sortedVowel[j];
                count[sortedVowel[j]]--;
            }
        }
        return ans;
    }
};