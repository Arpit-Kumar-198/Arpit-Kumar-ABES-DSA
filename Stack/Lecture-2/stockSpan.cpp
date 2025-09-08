// top interview problem

#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;


int main(){
    int arr[] = {100,80,60,81,70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    int nge[n];

    stack<int> st;
    nge[0] = -1;
    st.push(0);
    int i = 1;
    while(i < n){
        while(st.size()!=0 && arr[st.top()]<arr[i]){         // pop
            st.pop();
        }
        if(st.size()!=0) nge[i] = st.top();             // ans
        else nge[i] = 1;
        st.push(i);                                // push
        i++;    
    }
    for(int i = 0; i < n; i++) {
         cout << i-nge[i] << " ";
    }
    // T.C. almost O(n)
    return 0;
}
