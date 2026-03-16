#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        vector<int>vec;
        for(int i=512;i>0;i=i>>1){
            if(n>=i){
                n-=i;
                vec.push_back(i);
            }
        }
        for(int i=0;i<vec.size()-1;i++)
            cout<<vec[vec.size()-1-i]<<" ";
        cout<<vec[0]<<endl;
    }
    return 0;
}