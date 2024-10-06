class Solution {
public:
    std::vector<std::string> split(const std::string& sentence) {
    vector<string> words;
    std::stringstream ss(sentence);
    string word;
    
    // Use stringstream to split the sentence into words
    while (ss >> word) {
        words.push_back(word);
    }
    
    return words;
}
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if(sentence1.size()>sentence2.size()){
            swap(sentence1,sentence2);
        }
        vector<string> s1,s2;
        s1 = split(sentence1);
        s2 = split(sentence2);
        int i=0,j=s1.size()-1,k=0,l=s2.size()-1;
        int st=1,en=1;
        while(i<=j){
            if(st=1 && i< s1.size() && k< s2.size() && s1[i]==s2[k]){
                i++;
                k++;
            }
            else{
                st=0;
            }
            if(en=1 && i<=j && i>=0 && j>=0 && s1[j]==s2[l]){
                j--;
                l--;
            }
            else{
                en=0;
            }
            if(st==0 && en==0)break;
        }
        if(j<i)return true;
        return false;
        
    }
};