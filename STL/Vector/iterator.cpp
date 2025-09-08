#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int>::iterator it;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << *(v.begin()) << endl;
    cout << *(v.end()-2) << endl;

    for(it=v.begin(); it!=v.end(); it++){       // forward iterator
        cout << *(it) << " ";
    }

    cout << endl;
    for(auto it=v.rbegin(); it!=v.rend(); it++){        // reverse iterator
        cout << *(it) << " ";
    }
    // if we dont declare that iterator on the top and try to run loop without using auto keyword it will show an error
    // but if we dont define iterator and use auto keyword compiler automatically detect what is the type of it



}
