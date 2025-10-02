# Using String

class Solution {
  public:
    int reverseDigits(int n){
        string s= to_string(n);
        reverse(s.begin(), s.end());
        n=stoi(s);
        return n;
    }
};
