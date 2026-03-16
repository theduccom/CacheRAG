#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  int n;
   cin >> n;

   vector<int> V;

   for(int i = 0; i < n; i++){
     string a, b;
     int slength[2];

    
     cin >> a >> b;

     slength[0] = a.length();
     slength[1] = b.length();


     if(a.length() != 1)reverse(a.begin(), a.end());
     if(b.length() != 1)reverse(b.begin(), b.end());

     if(a.length() > b.length()){
       for(int j = 0; j < slength[0] - slength[1]; j++) b+="0";
     }else{
       for(int j = 0; j < slength[1] - slength[0]; j++) a+="0";
     }
     int flag = 0;

     for(int j = 0; j < a.length(); j++){
       if(flag){
	 a[j]++;
	 flag--;
       }
       if((a[j]+b[j]-96)/10 == 0){
	 V.push_back(a[j]+b[j]-96);
       }else{
	 flag++;
	 V.push_back((a[j]+b[j]-96)%10);
       }
     }
 
     if(flag) V.push_back(1);

     if(V.size()-1 >= 80){
       cout << "overflow" <<endl;
     }else{
       for(int j = V.size()-1; j >= 0; j--){
	 cout << V[j];
       }
       cout << endl;
     }
     V.clear();
   }  
   return 0;
}