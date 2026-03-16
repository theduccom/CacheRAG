#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
  int ining;
  vector<int> result;

  cin>>ining;

  for(int i=0;i<ining;++i){
    int out_count=0;
    int score=0;
    string event;
    bool first=false;
    bool second=false;
    bool third=false;
    
    while(out_count!=3){
      cin>>event;

      if(event=="HIT"){
	if(third==true){
	  third=false;
	  score++;
	}
	if(second==true){
	  third=true;
	  second=false;
	}
	if(first==true){
	  second=true;
	}
	first=true;
      }

      else if(event=="HOMERUN"){
	if(first==true && second==true && third==true){
	  score+=4;
	  first=false;
	  second=false;
	  third=false;
	}
	else if((first==true && second==true && third==false) ||
		(first==true && second==false && third==true) ||
		(first==false && second==true && third==true)){
	  score+=3;
	  first=false;
	  second=false;
	  third=false;
	}
	else if((first==true && second==false && third==false) ||
		(first==false && second==true && third==false) ||
		(first==false && second==false && third==true)){
	  score+=2;
	  first=false;
	  second=false;
	  third=false;
	}
	else if(first==false && second==false && third==false)
	  score++;
      }

      else if(event=="OUT")
	out_count++;
    }
    result.push_back(score);
  }
  for(auto i:result)
    cout<<i<<endl;
}
	  