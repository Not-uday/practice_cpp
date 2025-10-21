//---program for checking no. is divisible by 5 or 3, or not

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no. : ";
    cin>>n;
    if(n%5==0 || n%3==0){       //  ||=or
        cout<<"no. is divisible by 5 or 3";
    }
    else{
        cout<<"no. is not divisible by 5 or 3";
    }
}