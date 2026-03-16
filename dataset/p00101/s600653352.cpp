
#include <iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string str;
    int n;
    cin>>n;
    getline(cin,str);
    for(int i=0;i<n;i++){
        getline(cin,str);
        for(int j=0;j<str.size();j++){
            if(str[j]=='o'){
                if(str[j-1]=='n'){
                    if(str[j-2]=='i'){
                        if(str[j-3]=='h'){
                            if(str[j-4]=='s'){
                                if(str[j-5]=='o'){
                                    if(str[j-6]=='H'){
                                        str[j]='a';
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        for(int i=0;i<str.size();i++){
            if(i==str.size()-1){
                cout<<str[i]<<endl;
            }else cout<<str[i];
        }
    }
    return 0;
}