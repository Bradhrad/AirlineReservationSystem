#include "Airline.h"

void main()
{
	Airlines list;
	list.makeseats();
	char prompt;
	char loop = 'y';
	do
	{
		cout << " AIRLINE RESERVATION SYSTEM \n";
		cout << "Press (E) to Enter passenger flight information " << endl;
		cout << "Press (D) to Display the passenger flight information " <<
			endl;
		cout << "Press (Q) to Quit the program " << endl;
		cin >> prompt;

		switch (prompt)
		{
		case 'E':
		case 'e':
			list.DataReq();
			break;

		case 'D':
		case 'd':
			list.displayReservation();
			cout << endl;
			break;

		case 'Q':
		case 'q':
			loop = 'n';
			cout << "\nExiting the program..\n";
			break;

		default:
			cout <<
				"this is an invalid choice. Please select prompt from the menu.\n";
		}
	} while ((loop == 'Y') || (loop == 'y'));
}
