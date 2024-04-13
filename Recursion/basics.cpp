#include <bits/stdc++.h>
using namespace std;

void _1toN(int n)
{
    if (n > 0)
    {
        _1toN(n - 1);
        cout << n;
    }
}

void Nto1_(int n)
{
    if (n > 0)
    {
        cout << n;
        Nto1_(n - 1);
    }
}

int SumOfN(int n)
{
    if (n > 0)
    {
        return SumOfN(n - 1) + n; // 1 + 2 + 3 + 4 + 5
        // return n + SumOfN(n - 1); // 5 + 4 + 3 + 2 + 1
    }
    return 0;
}

// 0! = 1 , 1! = 1 , 2! = 2 , 3! = 6

int factorial(int n)
{
    if (n > 0)
    {
        return factorial(n - 1) * n; // 1 * 2 * 3 * 4 * 5
        // return n * factorial(n - 1); // 5 * 4 * 3 * 2 * 1
    }
    return 1;
}

// Reversing an array by swap-
void reverseArray(vector<int> &arr, int l, int h)
{
    if (l <= h)
    {
        swap(arr[l], arr[h]);
        reverseArray(arr, l + 1, h - 1);
    }
}

// Palindrome
bool StringPalin(string s)
{
    //M1 - reverse string and check
    // string s1 = s;
    // reverse(s.begin(),s.end());
    // return (s1 == s?true:false);
    
    // M2
    // string ans = "";
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (isalnum(s[i]))
    //         ans += tolower(s[i]);
    // }
    // string rev = ans;
    // reverse(ans.begin(),ans.end());
    // return (rev == ans?true:false);

    // M3
    int i = 0 , j = s.size() - 1 ;
    while(i < j){
        if(!isalnum(s[i])){
            i++;
            continue;
        }
        if(!isalnum(s[j])){
            j--;
            continue;
        }
        if (tolower(s[i]) != tolower(s[j]))
            return false;
        i++;
        j--;
    }
    return true;

}



// fib - 0 1 1 2 3 5 8 13 . . .
int v[10] = {0};
int fib(int n){
    // M1 - loop
    // int a = 0 , b = 1 , sum = 0;
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << a << " ";
    //     sum = a + b;
    //     a = b;
    //     b = sum;
    // }

    // M2 - recursion better
    // if (n == 0) return a;
    // return fib(b , a + b , n - 1);

    //M3 - recusion
    // if (n <= 1) return n;
    // return fib(n - 1) + fib(n - 2);

    //M4 - memoization
    
    if (n <= 1){
        v[n] = n;
        return n;
    }
    else{
    if(v[n-1] == 0){
        v[n - 1] = fib(n-1);
    }
    if(v[n-2] == 0){
        v[n-2] = fib(n-2);
    }
    return v[n-1] + v[n-2];
    }

}

float taylor(int x , int n){
    // M1 - normal
    // static float p = 1  ,f = 1,r;
    // if(n == 0) return 0;
    // r = taylor(x,n-1);
    // p = p*x;
    // f = f*(n);
    // return r + p/f;
    // r = taylor(x,n-1) + p/f;
    // p = p*x;
    // f = f*(n);
    // return r;

    // M2 - Horner's rule
    if(n == 0) return 1;
    static float p = n,r;
    r = taylor(x,n-1) *(x/p) + 1;
    p--;
    return r;
}



int main()
{
    //_1toN(5);
    // Nto1_(5);
    // cout << SumOfN(5);
    // cout << factorial(5);
    // vector<int> v = {1, 2, 3, 4, 5};
    // reverseArray(v, 0, v.size() - 1);
    // for (auto i : v)
    //     cout << i << " ";
    // cout << StringPalin("A man, a plan, a canal: Panama");
    cout << fib(5);
    // cout << taylor(1,10);
}