#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        bool base[3]={};
    int out=0;
        int ans=0;
    string str;
    while(out!=3){
        cin>>str;
        if(str=="HIT"){
            if(base[2])ans++;
            base[2]=false;
            swap(base[1],base[2]);
            swap(base[1],base[0]);
            base[0]=1;
        }
        if(str=="HOMERUN"){
            for(int i=0; i<3; i++){
                if(base[i])ans++;
                base[i]=false;
            }
            ans++;

        }
        if(str=="OUT")out++;
    }
        cout<<ans<<endl;
    }
    return 0;
}