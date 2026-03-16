//0050
#include<cstdio>
#include<cstring>
#include<limits>
using namespace std;

int main(void)
{
	const int STR_LENGTH = 1024;
	char str[STR_LENGTH];
	fgets(str, STR_LENGTH, stdin);

	const char apple[] = "apple",
				peach[] = "peach";
	char* pa = str, *pp = str;
	char *min = str;
	const char *fruit = NULL;

	for(;;)
	{
		pa = strstr(min, apple);
		pp = strstr(min, peach);
		if(!pa && !pp)
			break;
		else if(!pa)
		{
			min = pp;
			fruit = apple;
		}
		else if(!pp)
		{
			min = pa;
			fruit = peach;
		}
		else
		{
			if(pa < pp)
			{
				min = pa;
				fruit = peach;
			}
			else
			{
				min = pp;
				fruit = apple;
			}
		}

		min[0] = fruit[0];
		min[1] = fruit[1];
		min[2] = fruit[2];
		min[3] = fruit[3];
		min[4] = fruit[4];
		min++;
	}
	printf("%s", str);	//fgets()ツづ嘉シツ行ツ禿シツづゥ
	return 0;
}