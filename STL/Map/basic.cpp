#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> m;
    // keys are unique and values can be same 
    m["tv"] = 1000;
    m["fridge"] = 2000;
    m["laptop"] = 6000;
    m.insert({"headphone",900});
    m.emplace("pen",30);
    for(auto key : m) cout << key.first  << " - " << key.second << endl;
    cout << endl;

    cout << m["tv"] << endl;        // accessing a value using key
    cout << endl;

    cout << m.count("tv") << endl;      // give the no. of keys 
    m.erase("tv");
    cout << endl;

    if(m.find("fridge")!=m.end()) cout << "found" << endl;
    else cout << "Not found" << endl;

    cout << m.size() << "   ,   " << m.empty() << endl;
    // all values print in sorted order (sorted order of keys)
    // ifyou try to write m["tv"] = 3000; it will override the key "tv" , it will not create a new key
}