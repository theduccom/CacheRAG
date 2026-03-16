
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef pair<long long, long long> pairLL;
typedef vector<pairLL> resArr;

//#include <fstream>

int main(void)
{
	//ifstream fin("in.txt");
	istream& in=cin;
	resArr result;

	while(1)
	{
		int n;
		in >> n;
		if(n == 0)break;

		result.clear();

		for(int i=0; i<n; i++)
		{
			long long id, p, q;
			in >> id >> p >> q;

			resArr::iterator it;
			for(it=result.begin(); it!=result.end(); it++)
				if(it->first == id)
					break;
			
			if(it == result.end())
				result.push_back( pairLL(id, p*q) );
			else
				it->second += p*q;
		}

		bool exist=false;
		resArr::iterator it=result.begin();
		for(it; it!=result.end(); it++)
		{
			if((*it).second >= 1000000)
			{
				cout << (*it).first << endl;
				exist=true;
			}
		}
		if(!exist)
			cout << "NA" << endl;
	}
	return 0;
}