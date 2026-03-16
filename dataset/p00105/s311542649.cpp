#include <stdio.h>
#include <string.h>

typedef int		BOOL;
#define TRUE	1;
#define FALSE	0;

typedef struct Word
{
	char	word[31];
	int		page;
}	WORD;

WORD wordArray[100];

void input();
	BOOL is_smaller(char *, int, int);
void output();

int main()
{
    input();
    output();
	
	return 0;
}

void input()
{
	int 	cnt1, cnt2;
	char	tempWord[31];
    int		tempPage;
	
	while(scanf("%s %d", tempWord, &tempPage) != EOF)
	{
		for(cnt1 = 0; cnt1 < 100; cnt1++)
		{
			if(wordArray[cnt1].page == 0)
			{
				wordArray[cnt1].page = tempPage;
				strcpy(wordArray[cnt1].word, tempWord);
				break;
			}
			else if(is_smaller(tempWord, tempPage, cnt1))
			{
				for(cnt2 = 98; cnt2 >= cnt1; cnt2--)
				{
					strcpy(wordArray[cnt2 + 1].word, wordArray[cnt2].word);
					wordArray[cnt2 + 1].page = wordArray[cnt2].page;
				}
				strcpy(wordArray[cnt1].word, tempWord);
				wordArray[cnt1].page = tempPage;
				break;
			}
		}
	}
}

BOOL is_smaller(char *tempWord, int input_page, int cnt)
{
	if(strcmp(tempWord, wordArray[cnt].word) < 0)
	{
		return TRUE;
	}
	else if(strcmp(tempWord, wordArray[cnt].word) == 0)
	{
		if(input_page < wordArray[cnt].page)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
	else
	{
		return FALSE;
	}
}

void output()
{
	int		output_cnt = 0;
	char	last_print_word[31] = "";

	while(wordArray[output_cnt].page != 0)
	{
		if(strcmp(last_print_word, "") == 0)
		{
			printf("%s\n", wordArray[output_cnt].word);
			strcpy(last_print_word, wordArray[output_cnt].word);
		}
		else if(strcmp(wordArray[output_cnt].word, last_print_word) != 0)
		{
			printf("\n%s\n", wordArray[output_cnt].word);
			strcpy(last_print_word, wordArray[output_cnt].word);
		}
		else
		{
			printf(" ");
			
		}
		printf("%d", wordArray[output_cnt].page);
		output_cnt++;
	}
	printf("\n");
}