// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     //Find the doublet in the array whose sum is equal to given number x. -> (leetcode 1)
//     // same element can not be used twice.
//     vector<int> v;
//     int n, x;
//     cout<<"Enter size of the vector : ";
//     cin>>n;
//     cout<<"Enter elements in vector : ";
//     for(int i = 0; i < n; i++)
//     {
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     cout<<"Enter x : ";
//     cin>>x;
//     int p1 = 0, p2 = 0;
//     for(int i = 0; i < v.size()-1; i++)
//     {
//         for(int j = i+1; j < v.size(); j++)
//         {
//             if(v[i] + v[j] == x)
//             {
//                 cout<<"("<<i<<","<<j<<")"<<endl;
//                 cout<<"("<<v[i]<<","<<v[j]<<")"<<endl;
//                 cout<<endl;
//             }
//         }
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    //Find the doublet in the array whose sum is equal to given number x. -> (leetcode 1)
    // same element can not be used twice.
    vector<int> v;
    int n, x;
    cout<<"Enter size of the vector : ";
    cin>>n;
    cout<<"Enter elements in vector : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Enter x : ";
    cin>>x;
    sort(v.begin(), v.end());
    int lo = 0, hi = n-1;
    int idx1 = -1, idx2 = -1;
    while(lo < hi)
    {
        if(v[lo]+v[hi] == x)
        {
            idx1 = lo;
            idx2 = hi;
            break;
        }
        else if(v[lo]+v[hi] < x) lo++;
        else if(v[lo]+v[hi] > x) hi--;
    }

    cout << "Vector after sorting : ";
        for(int i = 0; i < n; i++) cout << v[i] << " ";
        cout << endl;
        
    cout << idx1 <<" , " << idx2 << endl;
    cout << "[" << v[idx1] << "," << v[idx2] << "]";
    return 0;
}