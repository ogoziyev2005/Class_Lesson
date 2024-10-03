//
// Created by Otabek Goziyev on 03/10/24.
//
#include <iostream>
using namespace std;
int main() {
   long unsigned int n1=0,n2=1,next;
    int n;
    cin>>n;
    cout<<n1<<" "<<n2<<" ";
    for(int i=2;i<=n;i++) {
        next=n1+n2;
        n1=n2;
        n2=next;
        cout<<next<<" ";
    }
}