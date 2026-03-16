#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<algorithm>

typedef std::map< std::string,std::vector<int> > Dic;
int main(){
	std::string input;
	int inum;
	Dic map;
	while( std::cin>>input>>inum )
		map[input].push_back(inum);
	
	for(auto it=map.begin();it!=map.end();++it){
			std::cout<<it->first<<std::endl;
			std::sort(it->second.begin(),it->second.end());
			for(int Page=0; Page!=it->second.size(); ++Page){
				std::cout<<it->second[Page]<<(Page==it->second.size()-1?"\n":" ");
			}
		}
	return 0;
}