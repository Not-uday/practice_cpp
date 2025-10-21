//program for absolute value

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"give n :";
    cin>>n;
    // if(n>=0) cout<<n;
    // if(n<0) cout<<-n;
    if(n<0) n = -n;
    cout<<n;
}