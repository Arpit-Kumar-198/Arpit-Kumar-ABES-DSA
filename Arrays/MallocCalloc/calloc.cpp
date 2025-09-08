#include<iostream>
using namespace std;
int main(){
    int* arr = (int*)calloc(5 , sizeof(int));  // unsafe cast needed
    // use arr...
    for(int i = 0; i < 5; i++) {
        arr[i] = i*2;
    }
     for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    free(arr);                                 // no destructor called
    return 0;
}
