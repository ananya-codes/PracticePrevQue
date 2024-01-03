//https://leetcode.com/problems/random-flip-matrix/

class Solution {
    set<pair<int,int>> ones;
    int r,c;
public:
    Solution(int m, int n) {
        
        r = m;
        c = n;
    }
    
    vector<int> flip() {
        int x = rand() % r;
        int y = rand() % c;

        if(ones.find({x,y}) == ones.end()){
            ones.insert({x,y});
            return {x,y};
        }
        else return flip();
    }
    
    void reset() {
        ones.clear();
    }
};

