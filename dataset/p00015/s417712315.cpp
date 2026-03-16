#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main()
{

    int ResultArray[50][101];
    int ArraySize[50];
    int DataSet;

    cin >> DataSet;
    int Loop = 0;
    while(Loop < DataSet)
    {
        string StringFirstNumber;
        string StringSecondNumber;
        int FirstArray[101];
        int SecondArray[101];
        char CharFirstNumber[100];
        char CharSecondNumber[100];
        int A;
        int B;
        vector<int> FirstNumber;
        vector<int> SecondNumber;
        vector<int> Result;

        cin >> StringFirstNumber;
        cin >> StringSecondNumber;
        //Convert string-int

        for(unsigned int x = 0; x < StringFirstNumber.length(); x++)
        {
            CharFirstNumber[x] = StringFirstNumber[x];
            A = CharFirstNumber[x] - '0';
            FirstNumber.push_back(A);
        }

        for(unsigned int y = 0; y < StringSecondNumber.length(); y++)
        {
            CharSecondNumber[y] = StringSecondNumber[y];
            B = CharSecondNumber[y] - '0';
            SecondNumber.push_back(B);
        }

        //Reverse Array
        reverse(FirstNumber.begin(),FirstNumber.end());
        reverse(SecondNumber.begin(),SecondNumber.end());

        //Give 0 to Result
        int Size1 = FirstNumber.size();
        int Size2 = SecondNumber.size();

        if(FirstNumber.size() > SecondNumber.size())
        {
            for( int a = 0; a < (Size1 - Size2); a++)
            {
                SecondNumber.push_back(0);
            }

            Size2 = Size1;
        }
        else
        {
            for( int b = 0; b < (Size2 - Size1); b++)
            {
                FirstNumber.push_back(0);
            }

            Size1 = Size2;
        }

        //Convert to Array
        for( int c = 0; c < Size1; c++)
        {
            FirstArray[c] = FirstNumber[c];

        }

        for( int d = 0; d < Size2; d++)
        {
            SecondArray[d] = SecondNumber[d];
        }

        //Addition
        for( int e = 0; e < Size1; e++)
        {
            ResultArray[Loop][e] = FirstArray[e] + SecondArray[e];
        }

        ResultArray[Loop][Size1] = 0;


        //Add 1 to next digit
        for( int f = 0; f < Size2+1; f++)
        {
            if(ResultArray[Loop][f] >= 10)
            {
                ResultArray[Loop][f] -= 10;
                ResultArray[Loop][f+1]++;
            }
        }

        //Reverse Result
        for(int i = 0; i < Size1+1; i++)
        {
            Result.push_back(ResultArray[Loop][i]);
        }

        reverse(Result.begin(),Result.end());
        //Store Result

        if(Result[0] == 0)
        {
            for(unsigned int g = 1; g < Result.size(); g++)
            {
                ResultArray[Loop][g-1] = Result[g];

            }
            ArraySize[Loop] = Result.size()-1;

        }
        else
        {
            for(unsigned int h = 0; h < Result.size(); h++)
            {
                ResultArray[Loop][h] = Result[h];
            }
            ArraySize[Loop] = Result.size();

        }
    Loop++;
    }

    for(int Last = 0; Last < DataSet; Last++)
    {
        //Print Answer
        if(ArraySize[Last] > 80)
        {
            cout << "overflow" << endl;
        }
        else
        {
            for(int Last1 = 0; Last1 < ArraySize[Last]; Last1++)
            {
                cout << ResultArray[Last][Last1];
            }
            cout << endl;
        }
    }

}