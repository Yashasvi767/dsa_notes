int gcd(int n1, int n2)
{
    if (n1 == 0)
        return n2;
    return gcd(n2%n1, n1);
}

vector<int> addFraction(vector<int> a, vector<int>b)
{
    vector<int> ans; 
   
    int den = gcd(a[1],b[1]);

    // Denominator of final fraction obtained
    // finding LCM of den1 and den2
    // LCM * GCD = a * b 
    den = (a[1]*b[1]) / den;

    // Changing the fractions to have same denominator
    // Numerator of the final fraction obtained
    int num = (a[0])*(den/a[1]) + (b[0])*(den/b[1]);

    // finding the common factor of numerator and denominator
    int common_factor = gcd(num,den);

    // Converting the result into simpler 
    // fraction by dividing them with common factor 
    den = den/common_factor;
    num = num/common_factor;
    ans.push_back(num); 
    ans.push_back(den); 
    return ans;
    
}
