#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    string a;
    cin>>n;
    for(int i=0; i<n; i++){
        int hit[3]={};
        int score= 0;;
        int out = 0;
        while(cin>>a){
            if(a=="HIT"){
                if(hit[2]==1)score++;
                hit[2]=hit[1];
                hit[1]=hit[0];
                hit[0]=1;
            }
            if(a=="HOMERUN"){
                score++;
                for(int t=0; t<3; t++){
                    if(hit[t]==1){
                        score++;
                        hit[t]=0;
                    }
                }
            }
            if(a=="OUT"){
                out++;
            }
            if(out==3)break;
        }
        cout<<score<<endl;
}
    return 0;
}