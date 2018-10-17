#include <iostream>
using namespace std;

int main()
{
        cout << "Enter number of rows and columns:\n";
        int rows;
        int columns;
        cin >> rows >> columns;
        int i = 0;
        while (i<rows)
        {
                for (int j=0; j<columns; j++)
                {
                        cout << "X.";
                }
        cout << "\n";
        i++;
        }
        return 0;
}
