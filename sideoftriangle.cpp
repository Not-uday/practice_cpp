//----program for checking a triangle or not

#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"enter a :";
    cin>>a;
    cout<<"enter b :";
    cin>>b;
    cout<<"enter c :";
    cin>>c;
   
    if((a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"a, b, c can be sides of triangle";
    }
    else {
        cout<<"they can not be sides of triangle";
    }
}








//  else if( a*a+b*b==c*c || b*b+c*c==a*a || c*c+b*b==a*a){
//         cout<<"a, b, c can be sides of triangle";
//     }a==b && b==c && c==a