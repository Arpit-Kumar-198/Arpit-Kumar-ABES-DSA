#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string, int> m;
    pair<string, int> p;
    p.first = "temp: ";
    p.second = 100;

    m["arpit age: "] = 20;
    m["arpit age: "] = 25;  // duplicate not allowed 
    m["shivani age: "] = 21;
    m.insert(p);

    cout << m["arpit age: "] << endl;

    for(auto it : m){   // here it is pair of <string,int> type
        cout << it.first << it.second << endl;
    }
    m.erase("temp: ");

    cout << endl;
    for (auto it : m)
    {
        cout << it.first << it.second << endl;
    }

    cout << endl;
    cout << m.size() << endl;   // 2

    cout << m.count("arpit age: ") << endl;
    cout << m.find("shivani age: ")->second;

    return 0;
}