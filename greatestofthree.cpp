//----program for greatest of them

#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"num 1 :";
    cin>>a;
    cout<<"num 2 :";
    cin>>b;
    cout<<"num 3 :";
    cin>>c;
    if(a>b & a>c){
        cout<<a<<" is greatest"; 
    }
    else if(b>c & b>a){
        cout<<b<<" is greatest";
    }
    else {
        cout<<c<<" is greatest";
    }
}    
 