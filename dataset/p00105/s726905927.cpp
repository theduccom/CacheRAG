#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

typedef std::pair<std::string,int> pa;
std::vector<pa>index;

int main(){
	std::string str;
	int page;
	while(std::cin>>str>>page){
		pa a;
		a.first=str,a.second=page;
		index.push_back(a);
	}
	std::sort(index.begin(),index.end());

	std::string d=index[0].first;
	std::cout<<d<<std::endl;
	std::cout<<index[0].second;

	for(int i=1;i<index.size();i++){
		if(index[i].first==d)std::cout<<" "<<index[i].second;
		else{
			std::cout<<std::endl;
			d=index[i].first;
			std::cout<<d<<std::endl;
			std::cout<<index[i].second;
		}
	}
	std::cout<<std::endl;
	return 0;
}