#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int num[8],n;
    cin>>n;
    while(n--){
        for(int i=0;i<8;i++){
            char c;
            cin>>c;
            num[i]=c-'0';
        }
        sort(num,num+8);
        int b=0,s=0;
        for(int i=0;i<8;i++){
            b+=num[i]*pow(10,i);
            s+=num[7-i]*pow(10,i);
        }
        cout<<b-s<<endl;
    }
}