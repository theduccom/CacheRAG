#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(){
        int n;
        scanf("%d ",&n);
        string a[n];
        for(int i=0;i<n;i++){
                getline(cin,a[i]);
                while(1){
                int index=0;
                index=a[i].find("Hoshino",index);
                if((int)string::npos==index)break;
                a[i][index+6]='a';
                }
        }
        for(int i=0;i<n;i++){
        cout<<a[i]<<"\n";
        }
        return 0;
}