#include <stdio.h>
#include <algorithm>
using namespace std;

int pow(int a,int n){
	if(n <= 0){
		return 1;
	}
	return a * pow(a,n - 1);
}

int main(){
char a[8][9];
int ans = 0;
while(1){
for(int i = 0; i < 8; i++){
if(scanf("%s",&a[i]) == EOF){
return 0;
}
}

for(int i = 0; i < 8; i++){

for(int j = 0; j < 8; j++){

if(a[i][j] == '1'){

if(i < 7 && j < 7){
if(a[i+1][j] == '1' && a[i][j+1] == '1' && a[i+1][j+1] == '1'){
printf("A\n");
}
}
if(i < 5){
if(a[i+1][j] == '1' && a[i+2][j] == '1' && a[i+3][j] == '1'){
printf("B\n");
}
}
if(j < 5){
if(a[i][j+1] == '1' && a[i][j+2] == '1' && a[i][j+3] == '1'){
printf("C\n");
}
}
if(i < 7 && j < 6){
if(a[i][j+1] == '1' && a[i+1][j+1] == '1' && a[i+1][j+2] == '1'){
printf("E\n");
}
}
if(i < 6 && j < 7){
if(a[i+1][j] == '1' && a[i+1][j+1] == '1' && a[i+2][j+1] == '1'){
printf("F\n");
}
}
if(j > 0 && i < 6){
if(a[i+1][j] == '1' && a[i+1][j-1] == '1' && a[i+2][j-1] == '1'){
printf("D\n");
}
}
if(j > 0 && j < 7 && i < 7){
if(a[i+1][j] == '1' && a[i][j+1] == '1' && a[i+1][j-1] == '1'){
printf("G\n");
}
}

}

}

}
}

	///////////////////////////////////
	//Sleep(200000);///////////////////// 提出するときは必ず外す！
	///////////////////////////////////
	return 0;

}