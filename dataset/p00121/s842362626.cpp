#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<queue>
#include<map>
#define SF scanf
#define PF printf
using namespace std;
int s[11]={1,8,64,512,4096,32768,262144,2097152};
map<int,int> vis;
queue<int>q;
int push_down(int a[]){
    int res=0;
    for(int i=1;i<=8;i++)
        res+=s[i-1]*a[i];
    return res;
}
void push_up(int a[],int num){
    for(int i=7;i>=0;i--){
        a[i+1]=num/s[i];
        num=num%s[i];
    }
}
void prepare(){
    q.push(16434824);
    vis[16434824]=1;
    while(!q.empty()){
        int a[10]={0};
        int nex=q.front();
        q.pop();
        push_up(a,nex);
        for(int i=1;i<=8;i++)
            if(a[i]==0){
                if(i!=5&&i!=1){
                    swap(a[i],a[i-1]);
                    int newx=push_down(a);
                    if(vis[newx]==0){
                        vis[newx]=vis[nex]+1;
                        q.push(newx);
                    }
                    swap(a[i],a[i-1]);
                }
                if(i!=4&&i!=8){
                    swap(a[i],a[i+1]);
                    int newx=push_down(a);
                    if(vis[newx]==0){
                        vis[newx]=vis[nex]+1;
                        q.push(newx);
                    }
                    swap(a[i],a[i+1]);
                }
                if(i>4){
                    swap(a[i],a[i-4]);
                    int newx=push_down(a);
                    if(vis[newx]==0){
                        vis[newx]=vis[nex]+1;
                        q.push(newx);
                    }
                    swap(a[i],a[i-4]);
                }
                if(i<5){
                    swap(a[i],a[i+4]);
                    int newx=push_down(a);
                    if(vis[newx]==0){
                        vis[newx]=vis[nex]+1;
                        q.push(newx);
                    }
                    swap(a[i],a[i+4]);
                }
            }
    }
}
int main(){
    prepare();
    int a[11];
    while(SF("%d",&a[1])!=EOF){
        int x=0;
        for(int i=2;i<=8;i++)
            SF("%d",&a[i]);
        for(int i=1;i<=8;i++)
            x+=a[i]*s[i-1];
        PF("%d\n",vis[x]-1);
    }
}