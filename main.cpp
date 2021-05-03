#include <iostream>
#include <string>
using namespace std;

class invalidCharacterException{};
class invalidRangeException{};


char character(char, int);
char character(char start, int offset)
{
	
	int temp = start + offset;
	if ((start < 65 || start > 90) && (start < 97 || start > 122))
	{
		throw invalidCharacterException();
	}
	
	if ((temp < 65 || temp > 90) && (temp < 97 || temp > 122))
	{
		throw invalidRangeException();
	}

	return char(temp);

}



int main()
{
	char letter;
	int offset;
	bool again = 1;
	while (again)
	{
		cout << "Please enter the start letter(A-Z, a-z)> ";
		cin >> letter;
		cout << "Please enter the offset> ";
		cin >> offset;

		try
		{
			
			cout << character(letter, offset) << endl;
			
		}
		catch (invalidCharacterException i)
		{
			cout << "Error: InvalidCharacterException" << endl;
		}
		catch (invalidRangeException b)
		{
			cout << "Error: InvalidRangeException" << endl;
		}
	}
	




	system("pause");
	cout << endl << endl;
	return 0;
}