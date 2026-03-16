#include<iostream>
#include<map>
#include<cstdio>
using namespace std;
int main(){
    map<char,bool>M;
    M['A']=true;
    M['B']=M['C']=false;
    char a,b;
    while(scanf("%c,%c",&a,&b)!=EOF){
        swap(M[a],M[b]);
    }
    for(map<char,bool>::iterator ite=M.begin();ite!=M.end();ite++){
        if(M[ite->first]){
            cout<<ite->first<<endl;
            break;
        }
    }

    return 0;
}