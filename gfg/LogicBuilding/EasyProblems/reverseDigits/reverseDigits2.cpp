# Using recursion

class Solution {
  public:
    void reverseDigits(int n, int &revNum, int &basePos) {
    if (n > 0) {
        reverseDigits(n / 10, revNum, basePos);  
        revNum += (n % 10) * basePos;             
        basePos *= 10;
    }
}
    
};
