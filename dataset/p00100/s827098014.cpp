#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void){
    int i,l,k;
    int n;
    long long id,c,q;
    long long data_list[4001];
    int id_list[4001];
    bool id_flag;
    bool na_flag;
    
    while(cin>>n,n!=0){
        k=0;
        memset(data_list,0,sizeof(data_list));
        memset(id_list,0,sizeof(id_list));
        for(l=0;l<n;l++){
            cin>>id>>c>>q;
            if(data_list[id]>=1000000)data_list[id]=1000000;
            else{
                data_list[id]+=(c*q);
            }
            id_flag=true;
            for(i=0;i<k+1;i++){
                if(id_list[i]==id){
                    id_flag=false;
                }
            }
            
            if(id_flag){
                id_list[k]=id;
            k++;
            }
        }
        na_flag=true;
        for(l=0;l<k;l++){
            if(data_list[id_list[l]]>=1000000){
                cout<<id_list[l]<<endl;
                na_flag=false;
            }
        }
        if(na_flag){
            cout<<"NA"<<endl;
        }
    }
    return(0);
}