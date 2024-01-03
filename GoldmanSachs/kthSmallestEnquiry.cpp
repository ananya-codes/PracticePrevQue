//https://leetcode.com/problems/query-kth-smallest-trimmed-number/solutions/

class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int> result;
        for(auto it: queries)
        {
            priority_queue<pair<string, int>> pq;
            int cut = it[1];
            int k = it[0];
            
            for(int i=0;i<nums.size();i++)
            {
                int t=nums[i].length()-cut;
                string s = nums[i].substr(t,cut);
                if(pq.size()<k)
                pq.push({s,i});

                else
                {
                    if(pq.top().first> s)
                    {
                        pq.pop();
                        pq.push({s,i});
                    }
                }
            }
            int ans = pq.top().second;
            result.push_back(ans);
        }
        return result;
    }
};