//---program for checking no. is divisible by 5 or 3 but not by 15

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. :";
    cin>>n;
    if((n%5==0 || n%3==0) && n%15!=0){
        cout<<"it is divisible by 5 or 3 but not 15";
    }
    else {
        cout<<"no. can be divisible by 15";
    }
}