#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int in(char a){
    switch (a){
            case 'I':
            return 1;
            case 'V':
            return 5;
            case 'X':
            return 10;
            case 'L':
            return 50;
            case 'C':
            return 100;
            case 'D':
            return 500;
            case 'M':
            return 1000;
        default:
            return 0;
    }
}
int main(){
    string str;
    while(cin>>str){
        vector<int>vec;
        int ans=0;
        for(int i=0;i<str.length();i++){
            vec.push_back(in(str[i]));
        }
        for(int i=0;i<vec.size();i++){
            if(i<vec.size()-1&&vec[i]<vec[i+1]){
                vec[i+1]-=vec[i];
            }
            else{
                ans+=vec[i];
            }
        }
        cout<<ans<<endl;
    }
}