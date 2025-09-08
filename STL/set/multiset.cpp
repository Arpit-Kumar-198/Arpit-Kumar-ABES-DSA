#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s; // arange elements in accending order 
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(7);
    s.insert(5);

    s.insert(5);    // trying to insert duplicate element , here its possible 
    s.insert(5);
    for(auto p : s) cout << p << " ";
    cout << endl << s.size();   // size will increase on inserting duplicates
    cout << endl << s.count(5) << endl;

    s.erase(3);
    for(auto p : s) cout << p << " ";

    cout << endl;
    cout << "Lower bound : " << *(s.lower_bound(4)) << endl;    // 4 set me h to 4 ayega 
    cout << "Lower bound : " << *(s.lower_bound(3)) << endl;    // 3 set me nhi hai to 3 se just badi value ayegi 
    // agar 3 nhi hai or 3 se just badi value bhi nhi hai to s.end() will be returned which will be 0

    cout << "Upper bound : " << *(s.upper_bound(4)) << endl;    // 4 set me h to 4 ayega 
    cout << "Upper bound : " << *(s.upper_bound(3)) << endl;    // 3 set me nhi hai to 3 se just badi value ayegi 
    // agar 3 nhi hai or 3 se just badi value bhi nhi hai to s.end() will be returned which will be 0
    return 0;
}