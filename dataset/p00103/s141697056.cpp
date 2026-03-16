#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    string ins;
    cin>>n;
    for(int ix=0;ix<n;ix++){
        int out=0,po=0;
        vector<bool> runner(3,false);
        for(;;){
            cin>>ins;
            if(ins=="HIT"){
                if(runner[2]){
                    po++;
                    runner[2]=false;
                }
                if(runner[1]){
                    runner[2]=true;
                    runner[1]=false;
                }
                if(runner[0]) runner[1]=true;
                runner[0]=true;
            }else if(ins=="OUT"){
                out++;
                if(out==3)break;
            }else if(ins=="HOMERUN"){
                po++;
                for(int i=0;i<3;i++){
                    if(runner[i])po++;
                    runner[i]=false;
                }
            }
        }
        cout<<po<<endl;
    }
}