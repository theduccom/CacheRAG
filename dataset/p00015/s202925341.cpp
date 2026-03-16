#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main(void)
{
int N,j,k=0;
cin >> N;
char strA[100000],strB[100000];
while(1){
k++;
if(k==N+1){
break;
}
cin >> strA >> strB;
int ans[81]={0};
ans[0]=11111;
if(strlen(strA)>80||strlen(strB)>80){
cout << "overflow" << endl;
continue;
}
int a[81]={0},b[81]={0};
if(strA[strlen(strA)-1]=='0'&&strB[strlen(strB)-1]=='0'){
    cout << 0 << endl;
    continue;
}
j=strlen(strA)-1;
for(int i=80 ; j>=0 ; i--){
a[i]=(int)strA[j]-48;
j--;
}
j=strlen(strB)-1;
for(int i=80 ; j>=0 ; i--){
b[i]=(int)strB[j]-48;
j--;
}
for(int i=80 ; i!=0 ; i--){
ans[i]=ans[i]+a[i]+b[i];
if(ans[i]>=10){
ans[i]=ans[i]-10;
ans[i-1]++;
}
}
if(ans[0]!=11111){
cout << "overflow" << endl;
continue;
}
for(int i=1 ; i<81 ; i++){
if(ans[i]!=0){
j=i;
break;
}
}
char c[3];
for(int i=j ; i<81 ; i++){
printf("%c",ans[i]+48);
}
cout << '\n';
}
return 0;
}