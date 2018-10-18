#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout.precision(4);
        int parameter;
        double output;
        while (parameter>-1)
        {
                cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" <<endl ;
                cin >> parameter;
		output = 0;
                for (int i=0; i <= parameter; i++)
                {
			if(i % 2 == 0)
                        {
                                output+=1.0/(2.0*i+1.0);
                        }
                        else
                        {
                                output+=-1.0/(2.0*i+1.0);
                        }
                }
                output*=4.0;
                if (parameter >=0 && output != 4)
                {
                        cout << "The approximate value of pi using ";
                        cout << parameter +1;
                        cout << " terms is: ";
			cout << output << endl;
                }
		else if (output = 4)
		{
			cout << "The approximate value of pi using ";
			cout << parameter + 1;
			cout << " terms is: 4.000" << endl;
		}
        }
        return 0;
}
