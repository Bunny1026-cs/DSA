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
void StringPalin(string s)
{
    
}

int main()
{
    //_1toN(5);
    // Nto1_(5);
    // cout << SumOfN(5);
    // cout << factorial(5);
    vector<int> v = {1, 2, 3, 4, 5};
    reverseArray(v, 0, v.size() - 1);
    for (auto i : v)
        cout << i << " ";
}