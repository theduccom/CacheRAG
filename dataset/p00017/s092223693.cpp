#include <cstdio>
#include <cstring>
using namespace std;
char The[][26] = { "the","uif","vjg","wkh","xli","ymj","znk","aol","bpm","cqn","dro","esp","ftq","gur","hvs","iwt","jxu","kyv","lzw","max","nby","ocz","pda","qeb","rfc","sgd" };
char This[][26] = { "this","uijt","vjku","wklv","xlmw","ymnx","znoy","aopz","bpqa","cqrb","drsc","estd","ftue","guvf","hvwg","iwxh","jxyi","kyzj","lzak","mabl","nbcm","ocdn","pdeo","qefp","rfgq","sghr" };
char That[][26] = { "that","uibu","vjcv","wkdw","xlex","ymfy","zngz","aoha","bpib","cqjc","drkd","esle","ftmf","gung","hvoh","iwpi","jxqj","kyrk","lzsl","matm","nbun","ocvo","pdwp","qexq","rfyr","sgzs" };
char buf[128], tmp[128];
int main()
{
	while (fgets(buf, 128, stdin)) {
		strcpy(tmp, buf);
		int k = 0;
		bool found = false;
		char* p = strtok(buf, " ");
		while (p) {
			if (!found) for (int i = 0; i < 26; ++i)  {
				if (!strcmp(p, The[i]) || !strcmp(p, This[i]) || !strcmp(p, That[i])) {
					found = true;
					k = i;
					break;
				}
			}
			p = strtok(NULL, " ");
		}
		for (int i = 0; tmp[i]; ++i) {
			if ('a' <= tmp[i] && tmp[i] <= 'z')
				putchar((tmp[i] - 'a' - k + 26) % 26 + 'a');
			else
				putchar(tmp[i]);
		}
	}
	return 0;
}