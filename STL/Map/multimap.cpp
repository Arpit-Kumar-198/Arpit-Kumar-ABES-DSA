#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string,int> m;
    // we cant use [] in case of multimap
    // m["tv"] = 1000;
    // m["fridge"] = 2000;
    // m["laptop"] = 6000;

    m.insert({"headphone",900});
    m.emplace("pen",30);
    m.emplace("tv",1000);
    m.emplace("tv",2000);
    m.emplace("tv",3000);
    cout << (m.find("tv"))->second << endl;
    for (auto key : m)
        cout << key.first << " - " << key.second << endl;
    cout << endl;

   

    cout << m.count("tv") << endl;      // give the no. of keys , here 3 "tv" present 
    m.erase(m.find("tv"));               // delete only 1 instance of "tv"
    for(auto key : m) cout << key.first  << " - " << key.second << endl;
    cout << endl;
    
    m.erase("tv");                      // remove all the "tv"
    cout << endl;

    if(m.find("fridge")!=m.end()) cout << "found" << endl;
    else cout << "Not found" << endl;

    cout << m.size() << "   ,   " << m.empty() << endl;
    
}