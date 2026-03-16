#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n,n){
        int pm,pe,pj;
        while(n--){
            cin>>pm>>pe>>pj;
            char res;
            double ave=(pm+pe+pj)/3.0;
            bool upFlag=false;
            if(pm==100||pe==100||pj==100)res='A';
            else if((pm+pe)/2.0>=90)res='A';
            else if(ave>=80)res='A';
            else if(ave>=70){
                res='B';
                upFlag=true;
            }
            else if(ave>=50&&(pm>=80||pe>=80)){
                res='B';
                if(upFlag)res='A';
            }
            else res='C';
            cout<<res<<endl;
        }
    }
}