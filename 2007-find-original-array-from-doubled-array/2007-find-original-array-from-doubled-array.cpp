class Solution
{
    public:
       static bool compare(int a, int b) {
	return a < b;
}
vector<int> findOriginalArray(vector<int>& changed) {
    int size = changed.size();
    vector<int> res;
    if(size & 1)
        return res;
    sort(changed.begin(), changed.end(), compare);
    
    queue<int> q;
    q.push(changed[0]);
    for(int i = 1; i < size; ++i) {
        if(!q.empty() && q.front() << 1 == changed[i]) {
            res.push_back(q.front());
            q.pop();
        } else
            q.push(changed[i]);
    }
    
    if(!q.empty())
        return {};
    return res;
}
};