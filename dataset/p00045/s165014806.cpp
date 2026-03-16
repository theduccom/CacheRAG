#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
        vector<int> val,n;
        char cn;
        int a,b,sum=0;
        float avr=0;
        while(cin>>a>>cn>>b){
                val.push_back(a);
                n.push_back(b);
        }
        for(int i=0;i<n.size();i++){
                sum+=(n[i]*val[i]);
                avr+=n[i];
        }
        avr /= n.size();
        avr += 0.5;
        
        printf("%d\n%.0f\n",sum,avr);
}