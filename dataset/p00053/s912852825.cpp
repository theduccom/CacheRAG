#include<iostream>
using namespace std;

void solve(int ans[10001]){
    bool flag=true;
    int count=0;
    int all=0;
    for(int i=2;;i++){
        for(int j=2;j<i/2+1;j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag){
            count++;
            all += i;
            ans[count]=all;
            if(count==10000){
                break;
            }
        }
        else{
            flag=true;
        }
    }
}

int main()
{
    int ans[10001];
    solve(ans);
    int num;
    while(cin>>num,num){
        cout<<ans[num]<<endl;
    }
    return 0;
}