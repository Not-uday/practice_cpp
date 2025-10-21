#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"enter num 1 :";
    cin>>a;
    cout<<"enter num 2 :";
    cin>>b;
    cout<<"enter num 3 :";
    cin>>c; 
    if(a>b){
        if(a>c) cout<<a<<" is the greatest";
        else cout<<c<<" is the greatest";
    }
    else {
        if(b>c) cout<<b<<" is the greatest";
        else cout<<c<<" is the greatest";
    }
}





    // if(a>c) cout<<a<<" is the greatest";
    //     else cout<<c<<" is the greatest";
    // }
    // else if(b>c){
    //     cout<<b<<" is the greatest";
    // }
    // else {
    //     cout<<c<<" is the greatest";
