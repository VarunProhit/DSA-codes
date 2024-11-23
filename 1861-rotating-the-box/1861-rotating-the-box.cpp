class Solution {
public:
   std::vector<std::vector<char>> rotate(const std::vector<std::vector<char>>& matrix) {
    int m = matrix.size();    // Number of rows
    int n = matrix[0].size(); // Number of columns

    // Create a new matrix of size n x m
    std::vector<std::vector<char>> rotatedMatrix(n, std::vector<char>(m));

    // Fill the rotated matrix
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            rotatedMatrix[j][m - i - 1] = matrix[i][j];
        }
    }

    return rotatedMatrix;
}
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        
        vector<int> v(box[0].size(),0);
        int em=-1;
        vector<vector<char>> t;
   
        for(int i=0;i<box.size();i++)
        {
                 priority_queue<int> st;
            for(int j=box[0].size()-1;j>=0;j--)
            {
                if(box[i][j]=='*')
                {
                    while (!st.empty()) {
                          st.pop();
                          }
                }
                else if(box[i][j]=='.')
                    st.push(j);
                else{
                    if(!st.empty()){
                    int je = st.top();
                    st.pop();
                     box[i][j]='.';
                        box[i][je]='#';
                        st.push(j);
                    }
                }
            }
        }
       t =  rotate(box);
        return t;
    }
};