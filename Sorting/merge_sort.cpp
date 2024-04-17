#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    //storing elements in the temporary array in a sorted manner//
    while (left <= mid && right <= high)
    {
        if (a[left] <= a[right])
        {
            temp.push_back(a[left]);
            left++;
        }
        else
        {
            temp.push_back(a[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(a[right]);
        right++;
    }
    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        a[i] = temp[i - low];
    }
}

void merge_sort(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int mid = (high + low) / 2;
        merge_sort(v, low, mid); // left half
        merge_sort(v, mid + 1, high); // right half
        merge(v, low, mid, high); // merging sorted halves
    }
}

int main()
{
    vector<int> v = {5, 2, 8, 9, 1};
    int n = v.size();
    merge_sort(v, 0, n - 1);

    for (int i : v)
    {
        cout << i << " ";
    }
}