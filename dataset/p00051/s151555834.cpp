#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    char str[8];
    int n,num[8];
    int big[8],small[8],diff[8];
    cin>>n;
    while(n--){
        cin>>str;
        for(int j=0;j<8;j++){
            num[j]=(int)str[j]-48;
        }
        sort(num,&num[8]);
        for(int j=0;j<8;j++){
            big[-(j-7)]=num[j];
            small[j]=num[j];
        }
        for(int j=7;j>=0;j--){
            if(big[j]<small[j]){
                big[j] += 10;
                big[j-1]--;
            }
            diff[j]=big[j]-small[j];
        }
        bool flag=false;
        for(int j=0;j<8;j++){
            if(diff[j]!=0 || j==7){
                cout<<diff[j];
                flag=true;
            }
            else if(flag){
                cout<<diff[j];
            }
        }
        cout<<endl;
    }
    return 0;
}