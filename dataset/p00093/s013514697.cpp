#include<iostream>
#include<vector>
using namespace std;

int main(){
  int a,b,c=0;
  vector<int> year;
  for(;;){
    cin>>a>>b;
    if(!(a||b))break;

    if(c!=0)
      cout<<endl;

    for(int i=a;i<=b;i++){
      if(i%4==0){
	if(i%100==0){
	  if(i%400==0) year.push_back(i);
	  continue;
	}else{
	  year.push_back(i);
	}
      }
    }

    if(year.size()==0) {
      cout<<"NA"<<endl;
      goto NEXT;
    }

    for(vector<int>::iterator it=year.begin(); it != year.end(); ++it)
      cout<<*it<<endl;

  NEXT:
    year.clear();
    c++;
  }
}