#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> m;
    m["a"] = 10;
    m["b"] = 34;
    m["c"] = 23;
    m["d"] = 35;
    m.insert({"e", 67});
    m.emplace("e", 87);

    cout << m.find("e")->second << endl;

    return 0;
}