#include <iostream>
#include <string>
using namespace std;

int main(){
  int n,w,h,sup[10][10],wt[10],ht[10],at;
	
	while(1){
		w=0;
		h=0;
		at=0;
		
		cin >> n;
		
		if(n==0) break;
		
		for(h=0; h<n; h++){

			wt[h] = 0;

			for(w=0; w<n; w++){
				if(h==0) ht[w]=0;

				sup[h][w] = 0;

				cin >> sup[h][w];
				
				wt[h] += sup[h][w];
				
				ht[w] += sup[h][w];
			}
		}
		
		for(h=0; h<=n; h++){
			for(w=0; w<=n; w++){
				if(h<n && w<n){
					printf("%5d",sup[h][w]);
					
					at += sup[h][w];
				}
				
				else if(w==n && h<n){
					printf("%5d\n",wt[h]);
				}
				
				else if(h==n && w<n){
					printf("%5d",ht[w]);
				}
				
				else{
					printf("%5d\n",at);
				}
			}
		}
		
	}
  
  return 0;
}