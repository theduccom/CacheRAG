#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Sentence;

    string Alphabet = "abcdefghijklmnopqrstuvwxyz";
    string CapAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    getline(cin,Sentence);

    int SentenceLength = Sentence.length();

    for(int x = 0; x < SentenceLength; x++)
    {
        for(int y = 0; y < 26; y++)
        {
            if(Sentence[x] == Alphabet[y])
            {
                Sentence[x] = CapAlphabet[y];
            }
        }
    }

    cout << Sentence << endl;




}