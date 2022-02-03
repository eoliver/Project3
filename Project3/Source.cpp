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
	cout << "Practice: floating point"			<< endl;
	cout << "Practice: " << 3.0 + 4.0 * 6.0		<< endl;
	return 0;
}