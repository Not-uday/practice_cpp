#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no. :";
    cin>>n;
    if(n>99 && n<1000){         //we can use && or and both are same
        cout<<"it is three digit no.";
    }
    else{
        cout<<"it is not a three digit no.";
    }
}