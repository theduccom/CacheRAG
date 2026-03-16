#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>


using namespace std;

double solvet(int x){

    double t;

    t = sqrt(1.0*x/4.9);

    return t;

}

void funcv(double v_clash){
   int build=0;
   double v_theo = 0.0;
   double t=0.0;
   int count = 1;

  while(1){
      build = 5*count-5;

      t = solvet(build);
      

      v_theo = 9.8*t;
     // cout << build <<" "<< t << " "<<v_theo <<endl;

      if(v_clash < v_theo){
       cout << count << endl;
       break;
   }
   ++count;
   
  }
  



   
}


int main(){

 double v=0.0;


 while(cin >> v){

  funcv(v);   

 }



    return 0;



}