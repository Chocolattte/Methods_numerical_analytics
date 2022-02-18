#include "iostream"
#include  <cmath>
#include  <iomanip>

using namespace std;
const int fi0 = 5;


int main()
{
	//double  fi;
	double  analitic, explici, implicit, trapezoid, t = 300;
	double r = 3, c = 2, h = 5; //10 iterations
    cout <<endl<<"------------------------------LABORATORY WORK 1-------------------------------------------------" << endl<<endl;

	cout << "t(sec):   "<<"The Analitic:          "<<"The Explicit:        "<<"The Implicit:           " << "The Trapezoid:   " << endl << endl;

	cout << "------------------------------------------------------------------------------------------------" << endl;

	for (int i = 0; i<26; i++)
	{
		analitic = fi0*exp(((-i)*h) / (r*c));
		explici = fi0*pow((1 - h / (r*c)), i);
		implicit = fi0 / pow((1 + h / (r*c)), i);
		trapezoid = (explici + implicit)*0.5;

		/*Time*/
		cout <<"|"<<i*h; if (i*h == 0) cout << "     |"; if (30 == i*h || i*h == 60||i*h==90) cout << "    |"; if(i*h>90) cout << "   |"; cout.width(18);

		/*The analitic method*/
		cout << analitic; cout << "   |"; cout.width(18);

		/*The Explicit method*/
		cout << explici; cout << "   |"; cout.width(18);

		/*The Implicit method*/
		cout << implicit; cout << "   |"; cout.width(18);
		/*The trapezoid method*/
		cout << trapezoid << "   |" << endl;
	}
	cout << "------------------------------------------------------------------------------------------------" << endl;
	system("PAUSE");
	return 0;
}