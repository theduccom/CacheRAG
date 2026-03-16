#include<iostream>
#include<cstring>
using namespace std;
int main(){
   int t=1;
   string S;
   while(cin >> S){
	if((S=="B,C")||(S=="C,B")){
		if(t==1){
			t=1;
		}else if(t==2){
			t=3;
		}else if(t==3){
			t=2;
		}
	}else if((S=="A,C")||(S=="C,A")){
		if(t==1){
			t=3;
		}else if(t==2){
			t=2;
		}else if(t==3){
			t=1;
		}
	}else if((S == "A,B")||(S == "B,A")){
		if(t==1){
			t=2;
		}else if(t==2){
			t=1;
		}else if(t==3){
			t=3;
		}
	}
   }

   if(t==1){
	 cout << "A" << endl;
   }else if(t==2){
	 cout << "B" << endl;
   }else if(t==3){
	 cout << "C" << endl;
   }
   return 0;
}


		