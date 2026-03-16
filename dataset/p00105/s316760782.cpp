#include <iostream>
#include<string>
#include<utility>
using namespace std;
int main() {
    pair<string,int> go[100000];
    int i=0;
    while(cin>>go[i].first>>go[i].second){
        i++;
    }
    int at;
    string fir;
    at=0;
    for(int l=0;l<i;++l){
        fir="zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
        for(int j=l;j<i;++j){
            if(go[j].first<=fir){
                fir=go[j].first;
                at=j;
            }
        }
        swap(go[at],go[l]);
    }
    fir=go[0].first;
    for(int k=1;k<i;++k){
        if(go[k].first!=fir){
        fir=go[k].first;
        }
        else{
            go[k].first="-1";
        }
    }
    int min=100000;
    
    for(int k=0;k<i;++k){
        at=k;
        min=100000;
        for(int l=k;l<i;++l){
            if(l!=k&&go[l].first!="-1"){
                break;
            }
            if(go[l].second<min){
                min=go[l].second;
                at=l;
            }
        }
        swap(go[k].second,go[at].second);
    }
    for(int k=0;k<i;++k){
        if(go[k].first=="-1"){
            cout<<" "<<go[k].second;
        }
        else if(go[k].first!="-1"&&k!=0){
            cout<<endl<<go[k].first<<endl<<go[k].second;
        }
        else{
            cout<<go[k].first<<endl<<go[k].second;

        }
    }
    cout<<endl;
    return 0;
}
