#include <cstdio>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	map< string , vector<int> > list;
	set<string> namelist;
	char cself[256];
	int iself;
	while(scanf("%s %d",cself,&iself) != EOF){
		list[cself].push_back(iself);
		namelist.insert(cself);
	}
	vector<int>::iterator it;
	set<string>::iterator nit;
	
	//sort(namelist.begin(),namelist.end());
	
	bool f;
	
	for(nit = namelist.begin();nit != namelist.end();nit++){
		printf("%s\n",(*nit).c_str());
		f = false;
		sort(list[*nit].begin(),list[*nit].end());
		for(it = list[*nit].begin();it < list[*nit].end();it++){
			if(f){
				printf(" ");
			}
			printf("%d",*it);			
			f = true;
		}
		printf("\n");
	}
	
	return 0;
}