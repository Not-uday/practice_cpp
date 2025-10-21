//ram shyam ajay youngest of three....without "AND" & "OR"

#include <iostream>
using namespace std;
int main(){
    int ram;
    int shy;
    int aja;
    cout<<"enter ram age :";
    cin>>ram;
    cout<<"enter shyam age :";
    cin>>shy;
    cout<<"enter ajay age :";
    cin>>aja;
    if(ram<=shy){
        if(ram<=aja){
            if(ram==aja){
                if(ram==shy){
                    cout<<ram<<" :ram, shyam and ajay has same age";
                }
                else{
                    cout<<ram<<" :ram and ajay is youngest";
                }
            }
            else{
                if(ram==shy){
                    cout<<ram<<" :ram and shyam is youngest";
                }
                else{
                    cout<<ram<<" :ram is youngest";
                }
            }
        }
        else{
            if(aja==shy){
                cout<<aja<<" :ajay and shyam is youngest";
                } 
            else{
                cout<<aja<<" :ajay is youngest";
                }
        }
    }
    else{
        if(shy<=aja){
            if(shy==aja){ 
                cout<<shy<<" :shyam and ajay is youngest";
            }
            else{
                cout<<shy<<" :shyam is the youngest";
            }
        }
        else{
            cout<<aja<<" :ajay is youngest";
        }
    }
}