#include <iostream>
#include <vector>
using namespace std;

int INF=1e9;


int main(){
    while(true){
        vector<vector<int>> T(1000,vector<int>(1000,INF)); 
        vector<vector<int>> C(1000,vector<int>(1000,INF));
        int n,m;
        cin>>n>>m;
        if(n==0&&m==0) break;
        
        for(int i=0;i<n;i++){
            int a,b,Cost,Time;
            cin>>a>>b>>Cost>>Time;
            T[a][b]=Time;
            C[a][b]=Cost;
            T[b][a]=Time;
            C[b][a]=Cost;
        }

        
        int k;
        cin>>k;
        for(int i=0;i<k;i++){
            vector<int> d(1000,INF);
            vector<bool>  u(1000,false);
            int p,q,r;
            cin>>p>>q>>r;
            d[p]=0;
            
            if(r){
                while(true){
                    int v=-1;
                    for(int j=1;j<=m;j++){
                        if(u[j]) continue;
                        if(v==-1||d[j]<d[v]) v=j;
                    }

                    if(v==-1) break;
                    u[v]=true;

                    for(int l=1;l<=m;l++){
                        if(d[l]>d[v]+T[v][l]){
                            d[l]=d[v]+T[v][l];
                        }
                    }
                }
                cout<<d[q]<<endl;   
            }else{
                while(true){
                    int v=-1;
                    for(int j=1;j<=m;j++){
                        if(u[j]) continue;
                        if(v==-1||d[j]<d[v]) v=j;
                    }

                    if(v==-1) break;
                    u[v]=true;

                    for(int l=1;l<=m;l++){
                        if(d[l]>d[v]+C[v][l]){
                            d[l]=d[v]+C[v][l];
                        }
                    }
                }
                cout<<d[q]<<endl;      
            }
            
        }
    }

    return 0;
}
