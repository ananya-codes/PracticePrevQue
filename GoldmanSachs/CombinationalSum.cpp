//https://leetcode.com/problems/combination-sum-iii/submissions/1135310480/

class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> curr;
        helper(0,k,n,curr,ans);
        return ans;
    }

    void helper(int cnum, int k, int n, vector<int> curr, vector<vector<int>> &ans){
        if(n<0 || curr.size()>k)return;

        if(n==0 && curr.size()==k){
            ans.push_back(curr);
            return;
        }

        for(int i = cnum+1; i<=9;i++)
        {
            curr.push_back(i);
            helper(i, k,n-i,curr,ans);
            curr.pop_back();
        }
    }
};