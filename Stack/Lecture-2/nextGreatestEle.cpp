
#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;


int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int nge[n];
    // for(int i = 0; i < n; i++) {
    //     nge[i] = -1;
    //     for(int j = i+1; j < n; j++){
    //         if(arr[j]>arr[i]){
    //             nge[i] = arr[j];
    //             break;
    //         }
    //     }
    // }

    stack<int> st;
    nge[n-1] = -1;
    st.push(arr[n-1]);
    int i = n-2;
    while(i>=0){
        while(st.size()!=0 && st.top()<arr[i]){         // pop
            st.pop();
        }
        if(st.size()!=0) nge[i] = st.top();             // ans
        else nge[i] = -1;
        st.push(arr[i]);                                // push
        i--;    
    }
    for(int i = 0; i < n; i++) cout << nge[i] << " ";
    // T.C. almost O(n)
    return 0;
}
