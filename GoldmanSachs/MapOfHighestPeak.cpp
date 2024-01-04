//https://leetcode.com/problems/map-of-highest-peak/description/

class Solution {

public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int m = isWater.size();
        int n = isWater[0].size();

        vector<vector<int>> hieght(m, vector<int>(n,-1));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isWater[i][j] == 1){
                q.push({{i,j},0});
                hieght[i][j] = 0;
                }
            }
        }

        while(!q.empty())
        {
            int u = q.front().first.first;
            int v = q.front().first.second;
            int level = q.front().second;
            q.pop();

            int du[4] = {-1,0,1,0};
            int dv[4] = {0,1,0,-1};

            for(int i=0;i<4;i++)
            {
                int nu = u + du[i];
                int nv = v + dv[i];

                if(nu>=0 && nu<m && nv>=0 && nv<n && hieght[nu][nv]==-1 ){
                    hieght[nu][nv] = level + 1;
                    q.push({{nu,nv},level+1});
                }
            }
        }
        return hieght;
    }
};