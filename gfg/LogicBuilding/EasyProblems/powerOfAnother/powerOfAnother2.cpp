# Logarithmic method

class Solution {
  public:
    int isPowerOfAnother(int x, long int y) {
      
    
    float res1 = log(y) / log(x);
    return res1 == floor(res1);

    } 
  
};
