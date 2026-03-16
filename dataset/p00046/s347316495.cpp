#include<bits/stdc++.h>
using namespace std;

int main(){
  double mountain;
  double min=100000.0;
  double max=0;
  while(scanf("%lf",&mountain)!=EOF){

    if(min>mountain)min=mountain;
    if(max<mountain)max=mountain;
  }
  printf("%.1f\n",max-min);

}