#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Merge two sorted array.
    vector<int> v;
    vector<int> v2;
    int n, m;
    cout << "Enter size of array1 : ";
    cin >> n;
    cout << "Enter elements : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Enter size of array2 : ";
    cin >> m;
    cout << "Enter elements : ";
    for (int i = 0; i < m; i++)
    {
        int e;
        cin >> e;
        v2.push_back(e);
    }
    vector<int> v3(n + m);
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (v[i] < v2[j])
        {
            v3[k] = v[i];
            k++;
            i++;
        }
        else
        {
            v3[k] = v2[j];
            k++;
            j++;
        }
    }
    if (i == n)
    {
        while (j < m)
        {
            v3[k] = v2[j];
            j++, k++;
        }
    }
    if (j == m)
    {
        while (i < n)
        {
            v3[k] = v[i];
            i++, k++;
        }
    }
    for (int i = 0; i < m + n; i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}