#include<iostream>
#include<algorithm>
using namespace std;
const int INF=10000;
char a[1001],b[1001],c[1001];
void rev(int pnt,char *cp){
    for(int i=0;i<pnt/2;i++){
        char work;
        work=*(cp+i);
        *(cp+i)=*(cp+pnt-i-1);
        *(cp+pnt-i-1)=work;
    }
}
int main(){
    int n;
    cin>>n;
    while(n--){
        for(int i=0;i<1000;i++)a[i]=b[i]=c[i]=0;
        cin>>a>>b;

        int apnt,bpnt;
        for(int i=0;i<1000;i++)if(a[i]==0){apnt=i;break;}
        for(int i=0;i<1000;i++)if(b[i]==0){bpnt=i;break;}

        if(apnt>80 || bpnt>80){cout<<"overflow"<<endl;continue;}

        rev(apnt,a);
        rev(bpnt,b);
        int d[100];
        for(int i=0;i<100;i++)d[i]=0;
        int big=max(apnt,bpnt);
        for(int i=0;i<big;i++){
            if(i<apnt)d[i]+=a[i]-'0';
            if(i<bpnt)d[i]+=b[i]-'0';
        }
        for(int i=0;i<big;i++){
            if(d[i]>=10){
                d[i]%=10;
                d[i+1]++;
            }
        }
        if(d[big]==1)big++;
        if(big>80){
            cout<<"overflow"<<endl;
            continue;
        }
        for(int i=0;i<big;i++){
            c[i]=d[i]+'0';
        }
        rev(big,c);
        cout<<c<<endl;
    }
    return 0;
}