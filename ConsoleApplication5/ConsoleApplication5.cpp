#include <iostream>
#include <string>
using namespace std;
int main()
{
	int a1 = 60;
	int a2 = 60;
	int b1 = 25;
	int c1 = a1 + b1;
	int c2 = a1 - b1;
	int c3 = a1 * b1;
	int c4 = a1 / b1;
	int c5 = a1 % b1;

	if (a1 > b1)
	{
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}


	if (c1 < c3)
	{
		cout << "true" << endl;;
	}
	else {
		cout << "false" << endl;
	}


	if (c4 != c5)
	{
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}


	if (a1 == a2)
	{
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}



	// ариф.операторы :
	//cout << "a1 = " << a1 << endl;
	//cout << "b1 = " << b1 << endl;
	//cout << "sum a1 + b1 = " << c1 << endl <<
	//"vichit a1 - b1 = " << c2 << endl <<
	//"umnoj a1 * b1 = " << c3 << endl <<
	//"del a1 / b1 = " << c4 << endl <<
	//"ost a1 % b1 = " << c5 << endl; */


}