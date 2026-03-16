#include<iostream>
#include<cstdio>
using namespace std;

int A[1000000];

int main()
{
    long long N,B,C;
    while(cin >> N,N){
        long long cnt[4001]={};
        bool NAflag=true,used[4001]={};
        for(int i=0;i<N;i++){
            cin>>A[i]>>B>>C;
            cnt[A[i]] += B*C;

        }
        for(int i=0;i<N;i++){
            if(cnt[A[i]]>=1000000 && used[A[i]]==false){
                printf("%d\n",A[i]);
                used[A[i]]=true;
                NAflag=false;
            }
        }
        if(NAflag==true){
            cout<<"NA"<<endl;
        }
    }
    return 0;
}