#include<bits/stdc++.h>
using namespace std;
int main()
{
    int co=0,co1=0,Rectangle=0,Rhombus=0;
    double side[3];
    char str[300];
    while(cin>>str){
        for(int i=0;i<3;i++)side[i]=0;
        for(int i=0;i<=strlen(str);i++){
            if(str[i]==','||str[i]=='\0'){
                for(int j=co;j<i;j++)side[co1]+=(str[j]-'0')*pow(10,i-j-1);
                co=i+1;
                co1++;
            }
        }co=0;co1=0;
        if(side[0]==side[1])Rhombus++;
        else if(side[0]*side[0]+side[1]*side[1]==side[2]*side[2])Rectangle++;
    }
    cout<<Rectangle<<endl<<Rhombus<<endl;
}