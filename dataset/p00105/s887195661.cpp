#include<iostream>
#include<algorithm>
#include<string>
#include<map>
#include<vector>
using namespace std;
int main()
{
	multimap<string,int> ans;
	string in; int num;
	while(cin>>in>>num) 
	{
		ans.insert(multimap<string,int>::value_type(in,num));
	}

	multimap<string,int>::iterator it=ans.begin();
	while(1) 
	{
		int cnt=ans.count((*it).first);
		cout<<(*it).first<<endl;
		bool f=false;
		vector<int> nums(0,0);
		while(cnt--) 
		{
			//cout<<(*it).second<<endl;
			nums.push_back((*it).second);
			it++;
		}
		sort(nums.begin(),nums.end());
		for(int i = 0; i < nums.size(); ++i)
		{
			if(f) cout<<" ";
			cout<<nums[i];
			f=true;
		}
		cout<<endl;
		if(it==ans.end()) break;
	}
  return 0;
}