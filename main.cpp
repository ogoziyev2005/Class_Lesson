#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   const float a=35.75;

float t;
    cin>>t;
    while (t<-58||t>41) {
        cout<<"Wrong temprerature.";
        cin>>t;
    }
    float v;
    cin>>v;
    while (v<2) {
        cout<<"Wrong wind speed";
        cin>>v;
    }
    float total=35.74 + 0.6215*t-a*pow(v,0.16)+0.4275*t*pow(v,0.16);
    cout<<total;
    return 0;
}
