#include<iostream>
using namespace std;
int main(){
    int arr[10] = {3, 5, 6, 8, 9, 12, 13, 43, 23, 56};
    bool flag = false;
    // taget = 12
    for(int i = 0; i < 10; i++){
        if(arr[i] == 12){
            flag = true;
            break;
        }
    }
    cout << flag;
    return 0;
}