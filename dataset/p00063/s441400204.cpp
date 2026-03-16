#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    int flg = 0;
    while(cin >> a){
        int cnt = 0;
        for(int i = 0; i < a.size()/2; i++){
            if(a[i] == a[a.size()-1-i])cnt++;
        }
        if(cnt == a.size()/2)flg++;
    }
    printf("%d\n",flg);
    return 0;
}