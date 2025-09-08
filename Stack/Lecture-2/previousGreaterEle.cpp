
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

    stack<int> st;
    nge[0] = -1;
    st.push(arr[0]);
    int i = 1;
    while(i <= n){
        while(st.size()!=0 && st.top()<arr[i]){         // pop
            st.pop();
        }
        if(st.size()!=0) nge[i] = st.top();             // ans
        else nge[i] = -1;
        st.push(arr[i]);                                // push
        i++;    
    }
    for(int i = 0; i < n; i++) cout << nge[i] << " ";
    // T.C. almost O(n)
    return 0;
}
