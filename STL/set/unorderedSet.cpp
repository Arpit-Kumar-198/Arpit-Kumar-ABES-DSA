#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s; // arange elements in random order 
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(7);
    s.insert(5);

    s.insert(5);    // trying to insert duplicate element , not possible 
    s.insert(5);
    for(auto p : s) cout << p << " ";
    cout << endl << s.size();   // size will not increase on inserting duplicates
    cout << endl << s.count(3) << endl;

    s.erase(3);
    for(auto p : s) cout << p << " ";

    // data is not sorted so lower_bound , upper_bound ka koi concept nhi hai yha 

    
    return 0;
}