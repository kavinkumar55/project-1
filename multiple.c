#include <iostream> 
using namespace std; 
int calculate_sum(int a, int N) 
{ 
    int m = N 
    int sum = m * (m + 1) / 2; 
    int ans = a * sum; 
    return ans; 
} 
int main() 
{ 
    int a = 7, N = 49; 
    cout << "Sum of multiples of " 
         << a << " up to " << N << " = "
         << calculate_sum(a, N) << endl; 
    return 0; 
} 
