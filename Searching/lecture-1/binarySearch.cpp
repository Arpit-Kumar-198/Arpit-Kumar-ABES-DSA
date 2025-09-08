#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {2,3,4,5,6,7,8,9,10,11};
    int target = 5;
    int low = 0, high = 10-1;
    bool flag = false;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            flag = true;
            break;
        }
        else if(arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
   if(flag == true) cout << "Element found";
   else cout << "Element not found";
    return 0;
    /*
    mid = (low+high)/2 if low and high are very large number then this code will not run correctly
    (low + high)/2 = (low-low + low + high)/2 = low + (high-low)/2 now the problem is solved.
    */
}