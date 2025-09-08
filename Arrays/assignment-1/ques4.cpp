/*
    Given an array, pridict if the array contains duplicates or not.
    Condition => only one element should be duplicate.
*/
#include <iostream>
using namespace std;
int main() {
   
     int arr[10] = {0, 1, 5, 4, 2, 3, 0, 9, 6, 8};
     int ele = 0, idx1 = -1, idx2 = -1;
     for(int i = 0; i < 9; i++)
     {
         for(int j = i+1; j < 10; j++)
         {
            if(arr[i] == arr[j])
            {
                ele = arr[i];
                idx1 = i;
                idx2 = j;
                break;
            }
         }
     }
     cout << "Duplicate Number : " << ele << endl << "Indecies : " << idx1 << "," << idx2;
    return 0;
}