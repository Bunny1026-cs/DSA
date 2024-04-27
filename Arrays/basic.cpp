#include <bits/stdc++.h>
using namespace std;

// Rotating array by left or right by k places
void rotate_left(vector<int> &arr, int k)
{
    // LEFT
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
    // RIGHT
    // int n = arr.size();
    // k = k % n;
    // reverse(arr.begin(), arr.end() - k);
    // reverse(arr.end() - k, arr.end());
    // reverse(arr.begin(), arr.end());
}

void zeroes_end(vector<int> &arr)
{
    int i = 0, j = 0;
    int n = arr.size();
    while (i < n && j < n)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
}

// Merge two sorted arrays
vector<int> merge_sorted(vector<int> a, vector<int> b)
{
    int n = a.size();
    int m = b.size();
    int i = 0, j = 0;
    vector<int> temp;
    while (i < n && j < m)
    {
        if (a[i] <= b[j])
        {
            if (temp.size() == 0 || a[i] != temp.back())
            {
                temp.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (temp.size() == 0 || b[j] != temp.back())
            {
                temp.push_back(b[j]);
            }
            j++;
        }
    }
    while (j < m)
    {
        if (temp.size() == 0 || b[j] != temp.back())
        {
            temp.push_back(b[j]);
        }
        j++;
    }
    while (i < n)
    {
        if (temp.size() == 0 || a[i] != temp.back())
        {
            temp.push_back(a[i]);
        }
        i++;
    }
    return temp;
}

int find_missing(vector<int> nums)
{
    // Sum approach
    // int n = nums.size();
    // int asum = n * (n + 1) / 2;
    // int sum = 0;
    // for (int i = 0; i < n; i++)
    //     asum -= nums[i];
    // return asum;
    
    // XOR Approach
    // a ^ a = 0 , a ^ 0 = a
    int x = 0;
    for (int i = 0; i <= n; i++)
        x = x^i;
    for (int i = 0; i < n; i++)
        x = x^a[i];
    return x;
    
    
}

int main()
{
    vector<int> v = {0, 1, 0, 3, 1, 2};
    zeroes_end(v);
    vector<int> a = {1, 2, 3, 4, 6};
    vector<int> b = {2, 3, 5};
    vector<int> v1 = merge_sorted(a, b);

    for (auto i : v1)
    {
        cout << i << " ";
    }
}