#include<iostream>
using namespace std;

int main()
{
    int n;
    int max,first;
    bool flag=false;
    while(cin>>n,!cin.eof()){
        for(int i=2;i<n;i++){
            for(int j=2;j<i;j++){
                if(i%j==0){
                    break;
                }
                if(i/2<j){
                    max=i;
                    break;
                }
            }
        }
        if(n==3){
            max=2;
        }
        cout<<max<<' ';
        bool flag=false;
        for(int i=n+1;;i++){
            for(int j=2;j<i;j++){
                if(i%j==0){
                    break;
                }
                if(i/2<j){
                    first=i;
                    flag=true;
                    break;
                }
            }
            if(flag)break;
        }
        cout<<first<<endl;
    }
    return 0;
}