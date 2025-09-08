#include<iostream>
using namespace std;
/// @brief 
/// @return 
int main(){
    // Given radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
    float radius;
    cout<<"Enter the radius :";
    cin>>radius;

    float area = (3.141*radius*radius);

    float circumference = (2*3.141*radius);
    if(area>circumference){
        cout<<"Area of the circle is larger than the circumference.";
    }
    if(area==circumference){
        cout<<"Area is equall to circumference.";
    }
    else{
        cout<<"Area of the circle is not larger than the circumference.";
}
    }
    