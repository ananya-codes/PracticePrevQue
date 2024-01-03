//https://leetcode.com/problems/high-access-employees/description/

class Solution
{
public:
  vector<string> findHighAccessEmployees(vector<vector<string>> &access_times)
  {
    map<string, vector<int>> timeStamp;

    // storing in map namewise.
    for (auto it : access_times)
    {
      timeStamp[it[0]].push_back(stoi(it[1]));
    }

    vector<string> result;
    for (auto &[x, ls] : timeStamp)
    {
      // sorting timestamps inside map for each name.
      sort(begin(ls), end(ls));

      int n = ls.size();
      bool flag = false;

      for (int i = 0; i + 2 < n; i++)
      {
        flag |= ls[i + 2] < ls[i] + 100;
        if (flag)
          break;
      }

      if (flag)
        result.push_back(x);
    }
    return result;
  }
};