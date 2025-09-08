#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int> m;
    
    // arange data in random order 
    // T.C. for insert , delete , find , etc is O(1)
    m.insert({"headphone",900});
    m.emplace("pen",30);
    m.emplace("tv",1000);
    m.emplace("tv",2000);   // duplicates keys are not allowed 
    m.emplace("tv",3000);
    for(auto key : m) cout << key.first  << " - " << key.second << endl;
    cout << endl;

   

    cout << m.count("tv") << endl;     
    m.erase(m.find("tv"));             
    for(auto key : m) cout << key.first  << " - " << key.second << endl;
    cout << endl;
    

    if(m.find("fridge")!=m.end()) cout << "found" << endl;
    else cout << "Not found" << endl;

    cout << m.size() << "   ,   " << m.empty() << endl;
    
}