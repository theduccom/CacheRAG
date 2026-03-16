#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin>>N;
    getchar();
    for(int i=0;i<N;i++){
        string S;
        getline(cin,S);
        while(S.find("Hoshino")!=-1){
            S.replace(S.find("Hoshino"),7,"Hoshina");
        }
        cout<<S<<endl;
    }
    return 0;
}