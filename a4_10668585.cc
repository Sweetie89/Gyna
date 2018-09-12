#include <iostream>
using namespace std;

int gcd_finder(int a, int b);

int main()
{
   int a, b;

   cout << "Please enter two positive integers: \n";
   cin >> a >> b;

   cout << " GCD of Your numbers is " << gcd_finder(a, b);

   return 0;
}

int gcd_finder(int a, int b)
{
    if (b != 0) {
       return gcd_finder(b, a % b);
    }
    else {
       return a;
    }
}
