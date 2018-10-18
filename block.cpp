#include <iostream>
using namespace std;

int main()
{
        int rows = 1;
        int columns = 1;
	while (rows > 0 && columns > 0)
	{	
		cout << "Enter number of rows and columns:\n";
		cin >> rows >> columns;
		int i = 0;
		int j = 0;
		while (i<rows)
        	{
                	for (int j=0; j<columns; j++)
                	{
                        	cout << "X.";
                	}
        	cout << "\n";
        	i++;
        	}
	}
        return 0;
}
