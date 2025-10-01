class Solution {
  public:
    vector<int> getTable(int n) {
        vector<int> table;
        for(int i=1; i<=10; i++)
        {
           table.push_back(n * i);
        }
        return table;
    }
};
