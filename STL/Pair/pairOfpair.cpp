#include<iostream>
using namespace std;
int main(){
    pair<string,int> p1;
    p1.first = "Arpit";
    p1.second = 46;

   pair<string,pair<string,int> > info;
//    pair<string,pair<string,int> > info = {"arpit19842@gmail.com",{"Arpit",46}};


   info.first = "arpit19842@gmail.com";
   info.second = p1;

   cout << info.first << " : " << info.second.first << " " << info.second.second << endl;
}