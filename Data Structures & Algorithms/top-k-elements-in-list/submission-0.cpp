class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> count;

        for (int i = 0; i< nums.size() ; i++){
            count[nums[i]]++;

        }
        
        priority_queue<pair<int,int>> pq;

        for(auto& [number, frequency] : count){
            pq.push({frequency, number});
        }

        vector<int> result;

        for(int i= 0; i< k; i++){
            result.push_back(pq.top().second);
            pq.pop();
        }


        return result;
    }

};
