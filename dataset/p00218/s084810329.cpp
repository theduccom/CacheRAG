#include <iostream>
using namespace std;
int main(){
    int eng,ma,jp,n;
    char judge[10000];
    while(1){
        cin>>n;
        if(n==0){
            break;
        }
        for(int i=0;i<n;i++){
            cin>>ma>>eng>>jp;
            if((ma==100 || eng==100 || jp==100)||((ma+eng)/2>=90)||((ma+eng+jp)/3>=80)){
                judge[i]='A';
            }
            else if(((ma+eng+jp)/3>=70)||((ma+eng+jp)/3>=50&&(eng>=80 || ma>=80))){
                judge[i]='B';
            }
            else {
                judge[i]='C';
            }
        }
        for(int i=0;i<n;i++){
            cout<<judge[i]<<endl;
        }
    }
    return 0;
}