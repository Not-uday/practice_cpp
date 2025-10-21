//percentage of a student and grade according to that


// #include <iostream>
// using namespace std;
// int main(){
//     float n;
//     cout<<"percentage he has:";
//     cin>>n;
//     if(n>=81 && n<=100){
//         cout<<n<<": very good";
//     }
//     if(n>=61 && n<=80){
//         cout<<n<<": good";
//     }
//     if(n>=41 && n<=60){
//         cout<<n<<": average";
//     }
//     else{
//         cout<<n<<": fail";
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"percentage he has :";
    cin>>n;
    if(n<=100){
        if(n>=41){
            if(n>=61){
                if(n>=81){
                    cout<<n<<": very good";
                }
                else{
                    cout<<n<<": good";
                }
            }
            else{
                cout<<n<<": average";
            }
        }
        else{
            cout<<n<<": fail";
        }
    }
    else{
        cout<<n<<": wrong percentage given";
    }
}



// #include <iostream>
// using namespace std;
// int main(){
//     float n;
//     cout<<"percentage he has:";
//     cin>>n;
//     if(n>=81 && n<=100){
//         cout<<n<<": very good";
//     }
//     else if(n>=61){
//         cout<<n<<": good";
//     }
//     else if(n>=41){
//         cout<<n<<": average";
//     }
//     else{
//         cout<<n<<": fail";
//     }
// }