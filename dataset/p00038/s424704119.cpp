#include<iostream>
#include<vector>
#include<algorithm>

enum Role
{
	NoRole,
	Onepair,
	TwoPair,
	ThreeCard,
	Straight,
	FullHouse,
	FourCard
};

std::vector<int> CountSameCard(std::vector<int> card)
{
	std::vector<int> count(5);

	std::sort(card.begin(),card.end());

	int memory =card[0];

	int j=0;

	for(size_t i=1; i<5; ++i)
	{
		if(card[i]==memory)
		{
			count[j] += 1;
		}
		else
		{
			++j;
		}

		memory = card[i];
	}

	std::sort(count.begin(), count.end());

	return count;
}

bool JudgeStraight(std::vector<int> card)
{
	const int SpecialStraight[5]=
	{
		1,
		10,
		11,
		12,
		13,
	};

	std::sort(card.begin(),card.end());

	int memory = card[0];

	size_t i = 1;

	for(; i<5; ++i)
	{
		if(!(card[i]==memory+1))
		{
			break;
		}

		memory = card[i];
	}

	size_t j=0;

	for(; j<5; ++j)
	{
		if(card[j]!=SpecialStraight[j])
		{
			break;
		}
	} 

	return (i==5) || (j==5);
}

Role JudgeRole(std::vector<int> count, bool straight)
{
	std::sort(count.begin(),count.end());

	int max = *max_element(count.begin(),count.end());

	if(max==3)
	{
		return FourCard;
	}

	if(max==2)
	{
		if(count[3]==1)
		{
			return FullHouse;
		}
	}

	if(straight)
	{
		return Straight;
	}

	if(max==2)
	{
		return ThreeCard;
	}


	if(max==1)
	{
		if(count[3]==1)
		{
			return TwoPair;
		}

		return Onepair;
	}
	else
	{
		return NoRole;
	}
}


int main()
{
	std::vector<int> card(5);

	char c;

	while(std::cin >> card[0] >> c >> card[1] >> c >> card[2] >> c >> card[3] >> c >> card[4])
	{
		switch(JudgeRole(CountSameCard(card),JudgeStraight(card)))
		{
		case FourCard:
			std::cout << "four card\n";
			break;
		case FullHouse:
			std::cout << "full house\n";
			break;
		case Straight:
			std::cout << "straight\n";
			break;
		case ThreeCard:
			std::cout << "three card\n";
			break;
		case TwoPair:
			std::cout << "two pair\n";
			break;
		case Onepair:
			std::cout << "one pair\n";
			break;
		case NoRole:
			std::cout << "null\n";
			break;
		}
	}
}