//----program for profit loss

#include <iostream>
using namespace std;
int main(){
    int cost;
    int sell;
    cout<<"limited edition jordans"<<endl;
    cout<<"cost price :";
    cin>>cost;
    cout<<"selling price :";
    cin>>sell;
    // if(cost<sell){
    //     cout<<"PROFIT"<<endl;
    //     cout<<"how much :"<<sell-cost;
    // }
    // if(cost>sell){
    //     cout<<"LOSS"<<endl;
    //     cout<<"how much :"<<cost-sell;
    // }
    //   if(cost==sell){
    //     cout<<"NO PROFIT NO LOSS";
    // }
    if(cost<sell){
        cout<<"PROFIT"<<endl;
        cout<<"how much :"<<sell-cost;
    }
    else if(cost>sell){
        cout<<"LOSS"<<endl;
        cout<<"how much :"<<cost-sell;
    }
    else{
        cout<<"NO PROFIT NO LOSS";
    }
}