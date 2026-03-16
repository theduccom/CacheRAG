#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<sstream>
#define INF 999999
using namespace std;
int main(){
    int N;
    cin>>N;
    while(N--){
        stringstream ss;
        int NUM1,NUM2;
        char C[15];
        cin>>NUM1;
        ss<<NUM1;ss>>C;
        sort(C,C+strlen(C));
        NUM1=atoi(&C[0]);
        reverse(C,C+strlen(C));
        NUM2=atoi(&C[0]);
        cout<<max(NUM1,NUM2)-min(NUM1,NUM2)<<endl;
    }
    return 0;
}