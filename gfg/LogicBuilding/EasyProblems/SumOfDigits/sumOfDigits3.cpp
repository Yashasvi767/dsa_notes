class Solution {
  public:
    int sumOfDigits(int n) {
       string s = to_string(n);
       int sum=0;
       
       for (char ch : s)
       {
          sum+=ch-'0' ;
       }
       
       return sum;
    }
};
