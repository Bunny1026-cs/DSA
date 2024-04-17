#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int low, int high)
{
    int piv = v[low];
    int i = low;
    int j = high;
    while(i < j)
    {
        while(v[i] <= piv && i <= high - 1){
            i++;
        }
        while(v[j] > piv && j >= low  + 1){
            j--;
        }
        if(i < j){
            swap(v[i],v[j]);    
        }
    }
    swap(v[low],v[j]);
    return j;
}

void qs(vector<int> &v, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(v, low, high);
        qs(v, low, pivot - 1);
        qs(v, pivot + 1, high);
    }
}

int main()
{
    vector<int> v = {5, 2, 8, 9, 1};
    int n = v.size();
    qs(v,0,n - 1);
    for (int i : v)
    {
        cout << i << " ";
    }
}