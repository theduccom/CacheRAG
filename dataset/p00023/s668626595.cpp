#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#define PI 3.1415926535897932384626433
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        double ax,ay,ar,bx,by,br;
        cin>>ax>>ay>>ar>>bx>>by>>br;
        double dis=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
        if(dis+ar<br)cout<<"-2"<<endl;
        else if(dis+br<ar)cout<<"2"<<endl;
        else if(ar+br<dis)cout<<"0"<<endl;
        else cout<<"1"<<endl;
    }
    return 0;
}