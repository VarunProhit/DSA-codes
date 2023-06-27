class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int,pair<int,int>>>pq;     //Max Heap
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
               int sum=nums1[i]+nums2[j];
                 //only for first iteration until size is k
                if(pq.size() < k){
                    pq.push({sum,{nums1[i],nums2[j]}});
                }
                 // here compare sum with the top of pq 
                else if(pq.top().first > sum){
                    pq.pop();
                    pq.push({sum,{nums1[i],nums2[j]}});
                }
                else{
                    break;
                }
            }
        }
        while(!pq.empty()){
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        return ans;
    }
};




// class Solution {
// public:
//     vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
//         int m = nums1.size();
//         int n = nums2.size();

//         vector<vector<int>> ans;
//         set<pair<int, int>> visited;

//         priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>,
//                        greater<pair<int, pair<int, int>>>> minHeap;
//         minHeap.push({nums1[0] + nums2[0], {0, 0}});
//         visited.insert({0, 0});

//         while (k-- && !minHeap.empty()) {
//             auto top = minHeap.top();
//             minHeap.pop();
//             int i = top.second.first;
//             int j = top.second.second;

//             ans.push_back({nums1[i], nums2[j]});

//             if (i + 1 < m && visited.find({i + 1, j}) == visited.end()) {
//                 minHeap.push({nums1[i + 1] + nums2[j], {i + 1, j}});
//                 visited.insert({i + 1, j});
//             }

//             if (j + 1 < n && visited.find({i, j + 1}) == visited.end()) {
//                 minHeap.push({nums1[i] + nums2[j + 1], {i, j + 1}});
//                 visited.insert({i, j + 1});
//             }
//         }

//         return ans;
//     }
// };