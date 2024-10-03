//
// Created by Otabek Goziyev on 03/10/24.
//
#include <iostream>
using namespace std;
int main() {
    int num;
    cin>>num;
    int r;
    int flag=0;
    while (num>0) {
        r=num%10;
        if (r!=4&&r!=7) {
            flag=0;
            cout<<"No\n";
            break;
        }
        num/=10;
    }
    cout<<"Yes\n";
}