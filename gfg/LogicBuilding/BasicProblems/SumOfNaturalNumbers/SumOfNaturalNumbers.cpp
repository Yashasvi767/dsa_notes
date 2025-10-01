class Solution {
  public:
    int findSum(int n) {
        // code here
        int sum=0;
        for(int i=0; i<=n; i++){
             sum+=i;
        }
        return sum;
    }
};
