# Formuala based
# All primes greater than 3 are of the form 6k ± 1

class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if (n==2 || n==3)
            return false;
        
        if (n<=1 || n%2==0 || n%3==0)
            return true;
            
         for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}
};

