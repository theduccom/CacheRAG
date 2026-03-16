#include<iostream>
#include<map>
using namespace std;

int main(){
    long long n,num,mn,nm,mon;
    while(cin >> n,n){
        int c=0,sc[4001],cn=0,cc=0;
        map<int,long long> maps;
        for(int i=0;i<n;i++){
            int cnt=0,j=0;
            cin >> num >> mn >> nm;
            mon = mn*nm;
            maps[num] += mon;
            for(;j<c;j++){
                if(sc[j]==num)cn++;
            }
            if(cn==0||j==0){
                sc[c] = num;
                c++;
                //cout << sc[c] << endl;
            }
        }
        for(int i=0;i<c;i++){
            if(maps[sc[i]]>=1000000){
                cout << sc[i] << endl;
                cc++;
            }
        }
        if(cc==0) cout << "NA" << endl;
    }
    return 0;
}