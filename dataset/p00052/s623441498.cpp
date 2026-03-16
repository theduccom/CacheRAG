#include<iostream>
using namespace std;

int main()
{
    int n,num;
    int fiveCount=0;
    while(cin>>n,n){
        for(int i=1;i<=n;i++){
            num=i;
            for(;;){
                if(num%5==0){
                    fiveCount++;
                    num /= 5;
                }
                else{
                    break;
                }
            }
        }
        cout<<fiveCount<<endl;
        fiveCount=0;
    }
    return 0;
}