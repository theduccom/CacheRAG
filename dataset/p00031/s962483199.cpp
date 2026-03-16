#include<iostream>
using namespace std;
int weight[10]={1,2,4,8,16,32,64,128,256,512,};
bool weightFlag[10];
int main(){
    int n;
    while(cin>>n){
        if(n>=weight[9]){
            n-=weight[9];
            weightFlag[9]=true;
        }
        if(n>=weight[8]){
            n-=weight[8];
            weightFlag[8]=true;
        }
        if(n>=weight[7]){
            n-=weight[7];
            weightFlag[7]=true;
        }
        if(n>=weight[6]){
            n-=weight[6];
            weightFlag[6]=true;
        }
        if(n>=weight[6]){
            n-=weight[6];
            weightFlag[6]=true;
        }
        if(n>=weight[5]){
            n-=weight[5];
            weightFlag[5]=true;
        }
        if(n>=weight[4]){
            n-=weight[4];
            weightFlag[4]=true;
        }
        if(n>=weight[3]){
            n-=weight[3];
            weightFlag[3]=true;
        }
        if(n>=weight[2]){
            n-=weight[2];
            weightFlag[2]=true;
        }
        if(n>=weight[1]){
            n-=weight[1];
            weightFlag[1]=true;
        }
        if(n>=weight[0]){
            n-=weight[0];
            weightFlag[0]=true;
        }
        for(int i=0;i<10;i++){
            if(weightFlag[i]){
                cout<<weight[i];
                for(int j=i+1;j<10;j++){
                    if(weightFlag[j]){
                        cout<<' ';
                        break;
                    }
                }
            }
        }
        cout<<endl;
        for(int i=0;i<10;i++) weightFlag[i]=false;
    }
    return 0;
}