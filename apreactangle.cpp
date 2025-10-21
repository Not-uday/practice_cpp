#include <iostream>
using namespace std;
int main(){
    float l;
    float b;
    cout<<"enter length :";
    cin>>l;
    cout<<"enter breadth :";
    cin>>b;
    float ar;
    ar = l*b;
    float pr;
    pr =2*(l+b);
    if(ar>pr){
        cout<<"area of rectangle greater is greater then perimeter";
    }
    else if(pr>ar){
        cout<<"perimeter of rectangle is greater then area";
    }
    else cout<<"both area and perimeter of rectangle is same";//only when l=b
}