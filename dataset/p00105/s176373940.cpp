#include<iostream>
#include<string>
#include<map>
#include<set>

using namespace std;

int main(void){
  std::ios_base::sync_with_stdio();
  
  multimap<string,int> indexs;
  set<int> indexn;
  set<int>::iterator ites;
  map<string,int>::iterator item;
  string inps,tmps;
  int inpi;

  while(cin>>inps>>inpi){
	  indexs.insert(map<string,int>::value_type(inps,inpi));
  }
   item=indexs.begin();
	  tmps=(*item).first;
	  cout<<tmps<<endl;
	  while(indexs.end()!=item){
		  if(tmps!=(*item).first){
			  ites=indexn.begin();
			  while(indexn.end()!=ites){
				  cout<<(*ites);
				  ites++;
				  if(indexn.end()==ites) cout<<endl;
				  else cout<<" ";
			  }
			  tmps=(*item).first;
			  cout<<tmps<<endl;
			  indexn.clear();
		  }
		  indexn.insert((*item).second);
		  item++;
	  }
	  ites=indexn.begin();
	  while(indexn.end()!=ites){
			cout<<(*ites);
			ites++;
			if(indexn.end()==ites) cout<<endl;
			else cout<<" ";
	  }
	  indexn.clear();
  return 0;
}