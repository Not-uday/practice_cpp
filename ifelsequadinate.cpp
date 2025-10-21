//(x,y) lies in which quadinate axis or in x axis or y axis or origin

#include <iostream>
using namespace std;
int main(){
    float x;
    float y;
    cout<<"enter x :";
    cin>>x;
    cout<<"enter y :";
    cin>>y;
    cout<<"("<<x<<","<<y<<")";
    if(y!=0 and x!=0){
        if(x>0 and y>0){
            cout<<": lies in first quadrant";
        }
        else if(x<0 and y>0){
            cout<<": lies in second quadrant";
        }
        else if(x<0 and y<0){
            cout<<": lies in third quadrant";
        }
        else{
            cout<<": lies in fourth quadrant";
        }
    }
    else{
        if(y==0 and x!=0){
            cout<<": lies on x axis";
        }
        else if(y!=0){
            cout<<": lies on y axis";
        }
        else{
            cout<<": lies on origin";
        }
    }
    
}




