#include<iostream>
using namespace std;



int main(){
  int Case = 1;
  while(1){
    int w,n;
    int t[1001];
    int copy[1001];
    int takara[1000][2];
    for(int i=0;i<1001;i++){
      t[i]=0;
      copy[i]=0;
    }
                
    cin >> w;
    if ( w == 0)break;
    cin >> n;
    for(int i=0;i<n;i++){
      int kati,omosa;
      char conma;
      cin >> kati>>conma>>omosa;
      takara[i][0]=kati;
      takara[i][1]=omosa;
    }
                
    for(int i=1;i<=w;i++){
      if (i >= takara[0][1])copy[i] = takara[0][0]; 
    }
                
    for(int i=1;i<n;i++){
      for(int j=0;j<=w;j++){
        if (j <takara[i][1])t[j] = copy[j];
        else if (copy[j] < takara[i][0]+copy[j-takara[i][1]])t[j] = takara[i][0]+copy[j-takara[i][1]];
        else t[j] =copy[j]; 
      }
                
      for(int j=0;j<=w;j++){
        copy[j]=t[j];
      }
    }
                
    int max = t[w],maxweight = w;
    for(int i=w-1;i>=0 ;i--){
      //cout << t[i] <<" " << i << endl;                        
      if ( t[i] >= max ){
        max = t[i];
        maxweight = i;
      }
                
                
    }
                
    cout << "Case " << Case++ <<":" <<endl <<max <<  endl<< maxweight << endl;
                
                
                
                
  }


  return 0;
}