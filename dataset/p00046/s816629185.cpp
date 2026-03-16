#include<iostream>
using namespace std;

int main()
{
    double height;
    double maxUp,maxLow;
    cin>>maxUp;
    maxLow=maxUp;
    while(cin>>height,!cin.eof()){
        if(height>maxUp){
            maxUp=height;
        }
        else if(height<maxLow){
            maxLow=height;
        }
    }
    cout<<maxUp-maxLow<<endl;
    return 0;
}