#include <map>
#include <cstdio>
#include <queue>
#include <iostream>
#include <string>
using namespace std;
typedef priority_queue< int,vector<int>,greater<int> > myqueue;

int main()
{
	myqueue que;
	map< string,myqueue > index;
	map< string,myqueue >::iterator it;
	int paz;
	char in[1001];
	string word;

	while( scanf("%s %d",in,&paz) != EOF ){
		word.append(in);
		
		if( index.find(word) == index.end() ){
			que.push(paz);
			index.insert( make_pair(word,que) );
			que.pop();
		}
		
		else{
			index[word].push(paz);
		}

		word.erase( word.begin(),word.end() );
	}

	for(it = index.begin(); it != index.end(); it++){
		cout << it->first << endl;
		while( !it->second.empty() ){
			printf("%d",it->second.top());
			it->second.pop();
			if(it->second.empty()){
				printf("\n");
			}
			else{
				printf(" ");
			}
		}
	}

	return 0;
}