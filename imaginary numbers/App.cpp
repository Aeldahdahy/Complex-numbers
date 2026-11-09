#include <iostream>
#include <string>
#include "App.h"
using namespace std;



int main() {

	matrix m1;
	cin >> m1;
	cout << m1;

	matrix m2;
	cin >> m2;
	cout << m2;



	matrix m3;
	m3 = m1 + m2;
	cout<< m3;

	complex x(0, 0);
	complex y(1, 1);
	complex z(2, 2);
	complex h(2,5);
	complex w(3,8);

	// +
	PrintResult(x + y);
	PrintResult(x + 10);
	PrintResult(-10 + y);
	PrintResult(y + z);
	PrintResult(y + h);
	PrintResult(z + h);

	// -
	PrintResult(w - h);
	PrintResult(w - z);
	PrintResult(x - x);

	// *
	PrintResult(h * w);
	PrintResult(h * 2);
	PrintResult(2 * w);


	// /
	PrintResult(h/w);
	PrintResult(h/2);
	PrintResult(2/w);

	int x1, y1;

	cout << "enter real number (1): " ;
	cin >> x1;
	cout << "enter imag number (1): " ;
	cin >> y1;
	complex userInput1(x1, y1);
	PrintResult(userInput1);

	int x2, y2;
	cout << "enter real number (2): " ;
	cin >> x2;
	cout << "enter imag number (2): " ;
	cin >> y2;
	complex userInput2(x2, y2);
	PrintResult(userInput2);


	while (true) {
		int task;
		cout << endl << "what do you want to do? for help press 1." << endl << "> ";
		cin >> task;
		if (task == 1) {
			cout << "To add your complex numbers press 2" << endl;
			cout << "To subtract your complex numbers press 3" << endl;
			cout << "To multiply your complex numbers press 4" << endl;
			cout << "To divide your complex numbers press 5" << endl;
		}
		else if(task == 2 )
		{
			int subTask;
			cout << "what to do for this opration? 1 or 2 " << endl << "> ";
			cin >> subTask;
			if (subTask == 1)
			{
				PrintResult(userInput1 + userInput2);
			}
			else if (subTask == 2) {
				PrintResult(userInput2 + userInput1);
			}
			else {
				cout << "invalid operation!";
			}
		}
		else if(task == 3)
		{
			int subTask;
			cout << "what to do for this opration? 1 or 2 " << endl << "> ";
			cin >> subTask;
			if (subTask == 1)
			{
				PrintResult(userInput1 - userInput2);
			}
			else if (subTask == 2) {
				PrintResult(userInput2 - userInput1);
			}
			else {
				cout << "invalid operation!";
			}
		}
		else if(task == 4)
		{
			int subTask;
			cout << "what to do for this opration? 1 or 2 " << endl << "> ";
			cin >> subTask;
			if (subTask == 1)
			{
				PrintResult(userInput1 * userInput2);
			}
			else if (subTask == 2) {
				PrintResult(userInput2 * userInput1);
			}
			else {
				cout << "invalid operation!";
			}
			 
		}
		else if(task == 5)
		{
			int subTask;
			cout << "what to do for this opration? 1 or 2 " << endl << "> ";
			cin >> subTask;
			if (subTask == 1)
			{
				PrintResult(userInput1 / userInput2);
			}
			else if (subTask == 2) {
				PrintResult(userInput2 / userInput1);
			}
			else {
				cout << "invalid operation!";
			}
			 
		}
		else
		{
			cout << "invalid task";
			break;
		}

	}


	return 0;
}