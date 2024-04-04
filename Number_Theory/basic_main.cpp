#include <bits/stdc++.h>
using namespace std;

// Count digits

int count(int n)
{
    // M1 - loop
    // int x = n,c = 0;
    // while(x!= 0){
    //     c++;
    //     x /= 10;
    // }
    // return c;
    // M2 - string conversion
    // return (to_string(n)).size();
    // M3 - log with base 10 + 1
    return log10(n) + 1;
}
// reverse string
string rev(int n)
{
    // M1 - loop
    // int x = n, r = 0;
    // while (x != 0)
    // {
    //     r = r * 10 + (x % 10);
    //     x /= 10;
    // }
    // return r;
    // M2 - string convert
    string num = to_string(n);
    reverse(num.begin(), num.end());
    return num;
}

int gcd(int a, int b)
{
    // M1 - Brute force
    // int min = a < b ? a : b , ans;
    // for (int i = 1; i <= min; i++)
    // {
    //     if (a % i == 0 && b % i == 0){
    //         ans = i;
    //     }
    // }
    // return ans;
    // // M2 - Euclidean algorithm
    // if (a < b){
    //     gcd(b, a);
    // }
    // int rem = 0;
    // while (b != 0){
    //     rem = a % b;
    //     a = b;
    //     b = rem;
    // }
    // return a;
    // M3 - recursion
    if (a < b)
    {
        gcd(b, a);
    }
    if (b == 0)
    {
        return a;
    }
    gcd(b, a % b);
}

string armstrong(int n)
{
    int len = log10(n) + 1;
    int sum = 0, x = n;
    while (x != 0)
    {
        sum = sum + pow(x % 10, len);
        x /= 10;
    }
    return (sum == n ? "Yes" : "No");
}

int main()
{
    // cout << count(123459028);
    // cout << rev(1234);
    // cout << gcd(6, 14);
    cout << armstrong(1634);
}