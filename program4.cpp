//
// Created by Otabek Goziyev on 03/10/24.
//
#include <iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    int digit, nn=0, x=1;
    while (num>0) {
        digit=((num%10)+7)%10;

        nn=nn+digit*x;
        x*=10;
    }
    cout<<nn<<endl;
    cout<<(nn%100)*100+nn/100<<endl;
    return 0;
}