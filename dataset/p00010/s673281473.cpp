#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){

  double x1, x2, x3, y1, y2, y3, k12, k23, p, q, r;
  int n;
  
  cin >> n;
  
  for(int i=0; i<n; i++){
  	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  	
  	if(y1 != y2){
  		k12 = - (x1 - x2) / (y1 - y2);
  	}
  	else {
  		p = (x1 + x2) / 2.0;
  		q = - (x2 - x3) / (y2 - y3) * (p - (x2 + x3) / 2.0) + (y2 + y3) / 2.0;
  		r = sqrt(pow(p - x1, 2) + pow(q - y1, 2));
  		
  		printf("%.3lf %.3lf %.3lf\n", p, q, r);
  		continue;
  	}
  	
  	if(y2 != y3){
  		k23 = - (x2 - x3) / (y2 - y3);
  	}
  	else {
  		p = (x2 + x3) / 2.0;
  		q = - (x1 - x2) / (y1 - y2) * (p - (x1 + x2) / 2.0) + (y1 + y2) / 2.0;
  		r = sqrt(pow(p - x1, 2) + pow(q - y1, 2));
  		
  		printf("%.3lf %.3lf %.3lf\n", p, q, r);
  		continue;
  	}
  	
  	p = (k12 * ((x1 + x2) / 2.0) - (y1 + y2) / 2.0 - k23 * ((x2 + x3) / 2.0) + (y2 + y3) / 2.0) / (k12 - k23);
  	q = - (x1 - x2) / (y1 - y2) * (p - (x1 + x2) / 2.0) + (y1 + y2) / 2.0;
  	r = sqrt(pow(p - x1, 2) + pow(q - y1, 2));
  	
  	printf("%.3lf %.3lf %.3lf\n", p, q, r);
	}  

  return 0;
}