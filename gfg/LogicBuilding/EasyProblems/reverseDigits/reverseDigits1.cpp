# Reverding digit by digit

class Solution {
  public:
    int reverseDigits(int n) {
      
        int revNum = 0;
        while (n > 0) {
        revNum = revNum * 10 + n % 10;
        n = n / 10;
    }
    return revNum;
}
    
};
