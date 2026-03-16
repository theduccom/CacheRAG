#include<iostream>
using namespace std;
int main(){
   int H,W;
   char t[101][101];

   while(cin >> H >> W,(H!=0&&W!=0)){
   for(int i=0;i<H;i++){
	for(int j=0;j<W;j++){
		cin >> t[j][i];
	}
   }

   int X=0,Y=0;
   for(int k=0;k<10000;k++){
	if(t[X][Y] == '>'){
		X++;
	}else if(t[X][Y] == '<'){
		X--;
	}else if(t[X][Y] == 'v'){
		Y++;
	}else if(t[X][Y] == '^'){
		Y--;
	}else if(t[X][Y] == '.'){
		break;
	}

   }

   if(t[X][Y] == '.'){
	cout << X << " " << Y << endl;
   }else{
	cout << "LOOP" << endl;
   }

   }
   return 0;
}