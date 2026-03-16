#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>

using namespace std;

#define reep(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reep(i,0,n)

typedef vector<int> vi;

int main()
{
	char str[81];
	while(fgets(str, 81, stdin) != NULL){
		stringstream sstr(str);
		vector<string> words;

		string tmp;
		while(sstr >> tmp)
			words.push_back(tmp);

		rep(i, 26){
			rep(j, words.size()){
				if(words[j] == "the" || words[j] == "this" || words[j] == "that"){
					rep(k, strlen(str))
						putchar(isalpha(str[k]) ? (str[k]-'a'+i)%26+'a' : str[k]);
					//puts("");
					i = 26;
					break;
				}

				rep(k, words[j].size())
					words[j][k] = (words[j][k]-'a'+1)%26 + 'a';
			}
		}
	}

	return 0;
}