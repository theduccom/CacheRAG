#include <iostream>
using namespace std;
int main(){
  int n,rui[3],outcnt,i,j,k,point,homeruncnt;
  string data;
  cin >> n;
  for(i=0;i<n;i++){
    outcnt=0;
    homeruncnt=0;
    point=0;
    for(j=0;j<3;j++)
      rui[j]=0;
      while(1){
      cin >> data;
      if(data=="HIT"){
        if(rui[0]==0) rui[0]=1;
	else{
	  if(rui[1]==0) rui[1]=1;
          else{
	    if(rui[2]==0) rui[2]=1;
	    else point++;
	  }
	}
      }
      else if(data=="HOMERUN"){
        for(k=0;k<3;k++){
	  if(rui[k]==1){
	    homeruncnt++;
	    rui[k]=0;
	  }
	}
        point=point+homeruncnt+1;
	homeruncnt=0;
      }
      else{
        outcnt++;
      }
      if(outcnt==3){
	outcnt=0;
        cout << point << endl;
	break;
      }
    }
  }
  return 0;
}