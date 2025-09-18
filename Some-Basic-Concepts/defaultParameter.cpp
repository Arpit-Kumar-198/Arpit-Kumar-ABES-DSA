
#include <bits/stdc++.h>
using namespace std;
void defaultParameter(int x = 18, string name = "User"){
    cout << x << " " << name << endl;
}
int main() {
    defaultParameter(21, "Arpit");
    defaultParameter();
    return 0;
}
