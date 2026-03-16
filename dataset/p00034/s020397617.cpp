#include<iostream>
using namespace std;

int main()
{
    while(true){
        char c;
        int line[10],v[2],allLength=0,length=0;;
        double lengthPer,passLength;
        for(int i=0;i<10;i++){
            cin>>line[i]>>c;
            if(cin.eof()){
                return 0;
            }
            allLength += line[i];
        }
        cin>>v[0]>>c>>v[1];
        lengthPer=(double)v[0]/((double)v[0]+(double)v[1]);
        passLength=(double)allLength*lengthPer;
        for(int i=0;i<10;i++){
            length += line[i];
            if(passLength<(double)length){
                cout<<i+1<<endl;
                length=0;
                break;
            }
            if(passLength==(double)length){
                cout<<i+1<<endl;
                length=0;
                break;
            }
        }
    }
}