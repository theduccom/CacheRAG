#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <iterator>
using namespace std;

struct AboutTo;

class Node{
public:
	int aa;
	int Lowest;
	bool IsSelected;
	vector<AboutTo> ToCollection;
	Node(){
		Lowest = 2147483647;
		IsSelected = false;
	}
	void Reset(){
		Lowest = 2147483647;
		IsSelected = false;
	}
};
struct AboutTo{
	Node* To;
	int Cost;
	int Time;
};

int GetShortest(const int a,const Node GoalNode, vector<Node> &aNodeCol, const int IsTime){
	aNodeCol[a].IsSelected = true;
	int TempMin = 2147483647;
	int aNode;
	for (auto i = aNodeCol.begin(); i != aNodeCol.end(); ++i){
		if ((*i).IsSelected){
			for (auto j = (*i).ToCollection.begin(); j != (*i).ToCollection.end(); ++j){
				if (!(*((*j).To)).IsSelected){
					if (IsTime){
						if (TempMin>(*i).Lowest + (*j).Time){
							TempMin = (*i).Lowest + (*j).Time;
							aNode = (*((*j).To)).aa;
						}
					}
					else{
						if (TempMin>(*i).Lowest + (*j).Cost){
							TempMin = (*i).Lowest + (*j).Cost;
							aNode = (*((*j).To)).aa;
						}
					}
				}
			}
		}
	}
	aNodeCol[aNode].Lowest = TempMin;
	if (aNode != GoalNode.aa){	
		return GetShortest(aNode, GoalNode, aNodeCol, IsTime);
	}
	return TempMin;
}

int main(){
	while (true){
	int n, m;
	cin >> n >> m;
	if (n == 0 && m == 0)break;
		vector<Node> NodeCollection;
		for (int i = 0; i < m; ++i){
			Node aNode;
			aNode.aa = i;
			NodeCollection.push_back(aNode);
		}
		for (int i = 0; i < n; ++i){
			int a, b, cost, time;
			cin >> a >> b >> cost >> time;
			NodeCollection[a - 1].ToCollection.push_back({ &NodeCollection[b - 1], cost, time });
			NodeCollection[b - 1].ToCollection.push_back({ &NodeCollection[a - 1], cost, time });
		}
		/*
		12 9
		1 2 5 5
		2 3 4 4
		3 6 3 10
		6 9 1 1
		9 8 7 6
		8 7 4 3
		7 4 2 1
		4 1 10 14
		2 5 7 8
		5 8 9 10
		4 5 9 9
		5 6 10 1
		*/
		int k;
		cin >> k;
		for (int i = 0; i < k; ++i){
			int p, q, r;
			cin >> p >> q >> r;
			NodeCollection[p - 1].Lowest = 0;
			if (p == q){cout << 0 << endl;
			}
			else{
				cout << GetShortest(p - 1, NodeCollection[q - 1], NodeCollection, r) << endl;
			}
			for (auto i = NodeCollection.begin(); i != NodeCollection.end(); ++i){
				(*i).Reset();
			}
		}
		
	}
	return 0;
}