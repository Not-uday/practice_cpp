//calculator 1st with if else ......2nd with switch

// #include <iostream>
// using namespace std;
// int main(){
//     float n1;
//     cin>>n1;
//     char op;
//     cin>>op;
//     float n2;
//     cin>>n2;
//     if(op=='+') cout<<n1+n2;  
//     if(op=='-') cout<<n1-n2;
//     if(op=='*') cout<<n1*n2;
//     if(op=='/') cout<<n1/n2;
// }

#include <iostream>
using namespace std;
int main(){
    float n1;
    cin>>n1;
    char op;
    cin>>op;
    float n2;
    cin>>n2;
    switch(op){
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        default:
            cout<<"invalid operator"<<endl;
            break;
    }
}