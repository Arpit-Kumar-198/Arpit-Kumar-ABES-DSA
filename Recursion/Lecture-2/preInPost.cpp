#include<iostream>
using namespace std;
void pip(int n)
{
    if(n == 1) return;
    cout << "Pre" << endl;
    pip(n-1);
    cout << "In" << endl;
    pip(n-1);
    cout << "Post" << endl;
}
int main(){
    pip(3);
    return 0;
}