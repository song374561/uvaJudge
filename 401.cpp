#include <iostream>
#include <string>
using namespace std;

bool testP(string line);
bool testM(string line);
char convert(char c);

int main()
{
	string line;
	while(cin >> line)
	{
		bool tp = testP(line);
		bool tm = testM(line);
		
		if (tp&&tm)
			cout << line << " -- is a mirrored palindrome." << endl << endl;
		else if (tp)
			cout << line << " -- is a regular palindrome." << endl << endl;
		else if (tm)
			cout << line << " -- is a mirrored string." << endl << endl;
		else
			cout << line << " -- is not a palindrome." << endl << endl;
	}
	return 0;
}

bool testP(string line)
{
	int i,j;
	for (i = 0 , j = line.size()-1 ; i<line.size() ; i++,j--)
	{
		if (line[i] != line[j])
			return false;
	}
	return true;
}

bool testM(string line)
{
	int i,j;
	for (i = 0, j = line.size()-1 ; i < line.size() ; i++,j--)
	{
		if (line[i] != convert(line[j]) || convert(line[j]) == '#')
			return false;
	}
	return true;
}

char convert(char c)
{
	switch(c)
	{
		case 'B':
		case 'C':
		case 'D':
		case 'F':
		case 'G':
		case 'K':
		case 'N':
		case 'P':
		case 'Q':
		case 'R':
		case '4':
		case '6':
		case '7':
		case '9':
			return '#';
		case 'A':
		case 'H':
		case 'I':
		case 'M':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case '1':
		case '8':
			return c;
		case 'E':
			return '3';
		case 'J':
			return 'L';
		case 'L':
			return 'J';
		case 'S':
			return '2';
		case 'Z':
			return '5';
		case '2':
			return 'S';
		case '3':
			return 'E';
		case '5':
			return 'Z';
		case 'O':
			return 'O';
	}
	return '#';
}