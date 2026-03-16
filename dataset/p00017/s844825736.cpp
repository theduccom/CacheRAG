#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
using namespace std;
int main(){
	string buf;
	
	while(getline( cin,buf )){
	
		for(int i=0;i<30;++i){
			string tmp = buf;
			for(int j=0;j<tmp.size();++j){
				if( tmp[j] >= 'a' && tmp[j] <= 'z' ){
					int aaa = (int)tmp[j] + i;
					if( aaa > 'z' ){
						int diff = aaa -1 - 'z' ;
						tmp[j] = 'a' + diff;
					}else{
						tmp[j] = aaa;
					}
				}
			}
			if( tmp.find("the")!=string::npos || tmp.find("this")!=string::npos ||tmp.find("that")!=string::npos ){
				cout << tmp << endl;
				break;
			}
			//cout << i << " " << tmp << endl;
		}
	}
	return 0;
}