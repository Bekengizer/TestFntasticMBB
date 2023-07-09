

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	
	
	string origin;
	int counter;
	
	const char NOTREPEAT = '(';
	const char REPEAT = ')';
	const int DIFFERENCE=32;

	counter = 0;
	
	cout << "Введите строку"<<endl;
	
	 cin>>origin; 
	
	string newStr(origin.length(), NULL);
	
	for (int j = 0; j <= origin.length()-1; j++)
	{
		for (int k = 0; k <=origin.length() - 1; k++)
		{
			
			 if (origin[j] == origin[k] || ((int)origin[j] + DIFFERENCE) == (int)origin[k] || ((int)origin[j] - DIFFERENCE) == (int)origin[k])
			{
				counter++;
				if (counter > 1)
				{
					newStr[j] = REPEAT;
					counter = 0;
					break;
				}
				if (newStr[k] != REPEAT)
				{
					newStr[k] = NOTREPEAT;
				}

			}
			
		}
		counter = 0;

	}

	cout << newStr;
	return 0;
}

