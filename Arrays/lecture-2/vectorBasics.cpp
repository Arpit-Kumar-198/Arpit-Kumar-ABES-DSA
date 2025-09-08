#include<iostream>
#include<vector>
using namespace std;
int main()
{
    /*
        Vector is a dyanamic array.

        #include<vector> headerfile is used.

        you need not mention the size.

        If we enter an extra element then it will create a 
        new array of double size and will copy the all content in
        the new array.
    */
    vector<int> v;
    v.push_back(6);    // v[0] = 6 will show segmentation fault.
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl<<endl;
    v.push_back(0);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl<<endl;
    v.push_back(2);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl<<endl;
    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl<<endl;
    v.push_back(3);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl<<endl;


    /* 
        capacity = 8
        size = 5
        ------------------------------------------------
        |  6  |  0  |  2   |  5  |  3  |    |    |     |
        ------------------------------------------------
    */
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<endl;

    v.erase(v.begin());     // remove an element from front
    cout << v[0];
    v.erase(v.end());     // remove an element from last
    cout << v[v.size()-1];
    return 0;
}