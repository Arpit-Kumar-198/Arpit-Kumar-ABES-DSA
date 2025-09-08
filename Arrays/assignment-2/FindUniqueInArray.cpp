// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[9] = {1,2,3,3,4,2,1,5,5}; // 1 1 2 2 3 3 4 5 5
//     int count = 0, sum = 0;
//     for(int i = 0; i < 8; i++)
//     {
//         for(int s = 0; s < 8-i; s++)
//         {
//             if(arr[s] > arr[s+1])
//             {
//                 int t = arr[s];
//                 arr[s] = arr[s+1];
//                 arr[s+1] = t;
//             }
//         }
//     }
//     for(int i = 0; i < 9; i++) sum += arr[i];
//     for(int i = 0; i < 8; i++)
//     {
//         if(arr[i] == arr[i+1]) count += 2*arr[i];
//     }
//     if(sum - count != 0) cout<<"Unique num is : "<<(sum - count);
//     else cout<<"No unique num.";
//     return 0;
// }


// T.C. => n*log(n)
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;  // 1 1 2 2 3 3 4 5 5
    arr.push_back(1);
     arr.push_back(2);
      arr.push_back(3);
       arr.push_back(3);
        arr.push_back(4);
         arr.push_back(2);
          arr.push_back(1);
           arr.push_back(5);
            arr.push_back(5);
    int sum2 = 0, sum = 0;
    sort(arr.begin(),arr.end());
    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if(arr[i] == arr[i+1]) sum2 += 2*arr[i];
    }
   if(sum-sum2 != 0) cout<<"Unique num is : "<<(sum - sum2);
    else cout<<"No unique num.";
    return 0;
}