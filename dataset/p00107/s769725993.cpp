#include<math.h>
#include<algorithm>
#include<iostream>

using namespace std;

int main(){
	int size[3];
	int n,r;
	int i;
	
	while(1){
	 for(i=0;i<3;i++){cin>>size[i];}
	 if(!(size[0]||size[1]||size[2])){break;}
	 sort(size,size+3);
	 
	 cin>>n;
	 for(i=0;i<n;i++){
	  cin>>r;
	  if(pow(size[0],2)+pow(size[1],2)<4*pow(r,2)){cout<<"OK\n";}else{cout<<"NA\n";}
	 }
	}
	
	return 0;
}