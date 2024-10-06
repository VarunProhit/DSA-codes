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
        // cout<<s1<<" "<<s2<<endl;
        int i=0,j=s1.size()-1,k=0,l=s2.size()-1;
        int st=1,en=1,mt=0;
        while(i<=j){
            if(st=1 && i< s1.size() && k< s2.size() && s1[i]==s2[k]){
                i++;
                k++;
                mt=1;
            }
            else{
                st=0;
            }
            if(en=1 && i<=j && i>=0 && j>=0 && s1[j]==s2[l]){
                j--;
                l--;
                mt=1;
            }
            else{
                en=0;
            }
            cout<<i<<" "<<j<<" "<<k<<l<<endl;;
            if(st==0 && en==0)break;
        }
        cout<<i<<" "<<j<<endl;
        if(j<i)return true;
        return false;
        
    }
};