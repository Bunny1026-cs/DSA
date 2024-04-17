#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if(v[j] > v[j+1])
                swap(v[j],v[j+1]);
        }
        
    }
}

void selection_sort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i; j < n; j++)
        {
            if(a[min] > a[j])
                min = j;
        }
        swap(a[i],a[min]);
    }
}

void insertion_sort(vector<int> &a)
{
    int n = a.size();
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while(a[j] < a[j-1] && j > 0)
        {
            swap(a[j],a[j-1]);
            j--;
        }
    }
}

int main()
{
    vector<int> v = {5,2,8,9,1};

    //bubble_sort(v);
    //selection_sort(v);
    insertion_sort(v);

    for(int i:v){
        cout << i << " ";
    }
}