/*
Preprocessor commands
*/
#include <iostream>
#include <iomanip>

using namespace std;

/*
This program displays a message
*/

int main()
{
	// DECLARATION STATEMENTS

	// OTHERS STATEMENTS

	cout << "\n";												// This is a comment
	cout << "\n";												// This is a comment
	cout << "\n";												// This is a comment
	cout << "\n";												// This is a comment
	cout << "Emerson Mauricio de Oliveira\n";					// This is a comment
	cout << "Rodovia SE-100,950\n";								// This is a comment
	cout << "Barra dos Coqueiros-SE\n";							// This is a comment
	cout << "Condomínio Solar da Barra\n";						// This is a comment
	cout << "Bloco 4\n";
	cout << "Apartamento 104\n";
	cout << "(11) 9 7951-6945\n";
	cout << "eoliveirabra@gmail.com\n";
	cout << "\n";
	cout << "\n";
	cout << "Degrees" << setw(8) << "Radians" << endl
		 << 0   << setw(8) << 0.0000 << endl
		 << 90  << setw(8) << 1.5708 << endl
		 << 180 << setw(8) << 3.1416 << endl
		 << 270 << setw(8) << 4.7124 << endl
		 << 360 << setw(8) << 6.2832 << endl;
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\nData Type			Bytes"
		 << "\n---------------------------"
		 << "\nint				" << sizeof(int)
		 << "\nchar				" << sizeof(char)
		 << "\nbool				" << sizeof(bool)
		 << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "The sum of 100 and 230 is " << (100 + 230) << endl;
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "15.0 plus 5.0 equals " << (15.0 + 5.0) << endl;
	cout << "15.0 minus 5.0 equals " << (15.0 - 5.0) << endl;
	cout << "15.0 times 2.0 equals " << (15.0 * 2.0) << endl;
	cout << "15.0 divided by 2.0 equals " << (15.0 / 2.0) << endl;
	cout << "\n";
	cout << "Practice: " << 3 + 4 * 6			<< endl;
	cout << "Practice: " << 3 * 4 / 6 + 6		<< endl;
	cout << "Practice: " << 2 * 3 / 12 * 8 / 4	<< endl;
	cout << "Practice: " << 10 * (1 + 7 * 3)	<< endl;
	cout << "Practice: " << 20 - 2 / 6 + 3		<< endl;
	cout << "Practice: " << 20 - 2 / (6 + 3)	<< endl;
	cout << "Practice: " << (20 - 2) / 6 + 3	<< endl;
	cout << "Practice: " << (20 - 2) / (6 + 3)	<< endl;
	cout << "Practice: " << 50 % 20				<< endl;
	cout << "Practice: " << (10 + 3) % 4		<< endl;
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";

	int amount = 1;
	int m = 50;
	int n = 10;
	int p = 5;

	cout << "Practice: " << n / p + 3 << endl;
	cout << "Practice: " << m / p + n - 10 * amount << endl;
	cout << "Practice: " << m - 3 * n + 4 * amount << endl;
	cout << "Practice: " << amount / 5 << endl;
	cout << "Practice: " << 18 / p << endl;
	cout << "Practice: " << -p * n << endl;
	cout << "Practice: " << -p / 20 << endl;
	cout << "Practice: " << (m + n) / (p + amount) << endl;
	cout << "Practice: " << m + n / p + amount << endl;

	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";


	double amount2 = 1.00;		// declaration statement: dataType variableName
	double m2 = 50.00;			// declaration statement: dataType variableName
	double n2 = 10.00;			// declaration statement: dataType variableName
	double p2 = 5.00;			// declaration statement: dataType variableName

	cout << "Practice: " << n2 / p2 + 3 << endl;
	cout << "Practice: " << m2 / p2 + n2 - 10 * amount2 << endl;
	cout << "Practice: " << m2 - 3 * n2 + 4 * amount2 << endl;
	cout << "Practice: " << amount2 / 5 << endl;
	cout << "Practice: " << 18 / p2 << endl;
	cout << "Practice: " << -p2 * n2 << endl;
	cout << "Practice: " << -p2 / 20 << endl;
	cout << "Practice: " << (m2 + n2) / (p2 + amount2) << endl;
	cout << "Practice: " << m2 + n2 / p2 + amount2 << endl;

	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "PROGRAM 2.7\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "\n";

	// Declaration statements

	double grade1;		// declare grade1 as double variable
	double grade2;		// declare grade2 as double variable
	double total;		// declare total as double variable
	double average;		// declare average as double variable


	grade1 = 85.5;
	grade2 = 97.0;
	total = grade1 + grade2;
	average = total / 2.0;		// divide the total by 2.0
	cout << "The average grade is " << average << endl;
	return 0;
}