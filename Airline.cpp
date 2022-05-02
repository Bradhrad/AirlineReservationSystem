#include "Airline.h"

int v;
int s;
int q;
char C;
void Airlines::DataReq()
{
	ListNode* newNode;
	newNode = new ListNode; //creating the linked list
	if (head == NULL)
	{
		head = newNode;
		last = newNode;
	}
	else
	{
		last->next = newNode;
		last = newNode;
	}
	cout << "Enter a first name\n";
	cin >> pass.FName; //passing the input to the function
	newNode->FName = pass.FName;
	newNode->next = NULL;

	cout << "Enter a last name\n";
	cin >> pass.LName;
	newNode->LName = pass.LName;
	newNode->next = NULL;

	cout << "Enter an Email\n";
	cin >> pass.Email;
	newNode->Email = pass.Email;
	newNode->next = NULL;

	cout << "Enter the passport ID\n";
	cin >> pass.PassID;
	newNode->PassID = pass.PassID;
	newNode->next = NULL;

	while (true)
	{
		cout << "Enter a boarding class:\n B: Business \n E: Economy\n";
		cin >> pass.Class;
		C = pass.Class;
		if ((pass.Class == 'B') || (pass.Class == 'b')) //different choices for B
		{
			cout << "Your boarding class is Business\n";
			cout << "Price: $450\n";
			break;
		}
		else if ((pass.Class == 'E') || (pass.Class == 'e'))
		{
			cout << "Your boarding class is Economy\n";
			cout << "Price: $250\n";
			break;
		}
		else
			cout << "Please enter a valid class\n";
	}

	while (true)
	{
		cout << "Please select your destination\n 1: Russia \n 2: Dubai \n 3: Turkey \n 4: Ukraine \n 5: USA \n";
		cin >> pass.Dis;
		if (pass.Dis >= 1 && pass.Dis <= 5) //condition to make sure it passes
		{
			cout << "Your distination has been entered successfully\n" << "Please select one of the dates below\n";
			newNode->value = pass.Dis;
			newNode->next = NULL;
			switch (pass.Dis)
			{
			case 1:
				cout << "1: 1/7/2022\n2: 10/7/2022\n";
				cin >> v;
				switch (v)
				{
				case 1:
					pass.date = "1/7/2022";
					v = 0;
					Airlines::checkSeat();
					break;
				case 2:
					pass.date = "10/7/2022";
					v = 1;
					Airlines::checkSeat();
					break;
				default:
					cout << "please enter a valid date\n";
				}
				newNode->date = pass.date;
				newNode->seat = s;
				break;
			case 2:
				cout << "1: 2/7/2022\n2: 15/7/2022\n";
				cin >> v;
				switch (v)
				{
				case 1:
					pass.date = "2/7/2022";
					v = 2;
					Airlines::checkSeat();
					break;
				case 2:
					pass.date = "15/7/2022";
					
					v = 3;
					Airlines::checkSeat();
					break;
				default:
					cout << "please enter a valid date\n";
				}
				newNode->date = pass.date;
				newNode->seat = s;
				break;
			case 3:
				cout << "1: 3/7/2022\n2: 12/7/2022\n";
				cin >> v;
				switch (v)
				{
				case 1:
					pass.date = "3/7/2022";
					
					v = 4;
					Airlines::checkSeat();
					break;
				case 2:
					pass.date = "12/7/2022";
					
					v = 5;
					Airlines::checkSeat();
					break;
				default:
					cout << "please enter a valid date\n";
				}
				newNode->date = pass.date;
				newNode->seat = s;
				break;
			case 4:
				cout << "1: 4/7/2022\n2: 11/7/2022\n";
				cin >> v;
				switch (v)
				{
				case 1:
					pass.date = "4/7/2022";
					
					v = 6;
					Airlines::checkSeat();
					break;
				case 2:
					pass.date = "11/7/2022";
					
					v = 7;
					Airlines::checkSeat();
					break;
				default:
					cout << "please enter a valid date\n";
				}
				newNode->date = pass.date;
				newNode->seat = s;
				break;
			case 5:
				cout << "1: 5/7/2022\n2: 14/7/2022\n";
				cin >> v;
				switch (v)
				{
				case 1:
					pass.date = "5/7/2022";
					v = 8;
					Airlines::checkSeat();
					break;
				case 2:
					pass.date = "14/7/2022";
					v = 9;
					Airlines::checkSeat();
					break;
				default:
					cout << "please enter a valid date\n";
				}
				newNode->date = pass.date;
				newNode->seat = s;
				break;
			}
			break;
		}
		else
		{
			cout << "invalid distination\n";
			continue;
		}
	}
	newNode->Class = pass.Class;
	newNode->next = NULL;



	stackname.push(10);
	if (stackname.size() == 5) //stack condition for loyalty points
		cout << "congratulations!, Your loyalty points are suffecent for a free trip." << endl;
	else
	{
		y = true;
		while (y)
		{
			cout << "choose your payment method\n 1: Credit card\n 2: Cash" << endl;
			cin >> pass.PM;
			switch (pass.PM)  //switch case for payment method
			{
			case 1:
			{
				cout << "Please put your credit card ID: ";
				cin >> pass.CC;
				cout << "Payment method: Credit card\n";
				y = false;
				break;
			}
			case 2:
			{
				cout << "Payment method: Cash\n";
				y = false;
				break;
			}
			default:
			{
				cout << "Please select a valid payment method\n";
				continue;
			}
			}
		}
	}
}


void
Airlines::displayReservation(void)
{
	ListNode *nodePtr;
	nodePtr = head;
	int i = 1;
	string x;
	if (head == NULL)
		cout << "Your list is empty\n";
	else
	{
		cout << "please enter your email address\n";
		cin >> x;
		while (nodePtr != NULL)
		{
			if (nodePtr->Email == x)
			{
				cout << "----------Flight information for passenger " << i << "----------\n";
				cout << "Name: " << nodePtr->FName << " " << nodePtr->LName << endl;
				cout << "Passport ID: " << nodePtr->PassID << endl;
				switch (pass.Dis)
				{
				case 1:
					cout << "Distenation: Russia\n";
					break;
				case 2:
					cout << "Distenation: Dubai\n";
					break;
				case 3:
					cout << "Distenation: Turkey\n";
					break;
				case 4:
					cout << "Distenation: Ukraine\n";
					break;
				case 5:
					cout << "Distenation: USA\n";
				}

				switch (pass.Class)
				{
				case 'B':
				case 'b':
					cout << "Class Type: Business\n";
					break;
				case 'E':
				case 'e':
					cout << "Class Type: Economy\n";
					break;
				}
				cout << "flight date: " << nodePtr->date << endl;
				cout << "seat number: " << nodePtr->seat << endl;
				switch (pass.PM)
				{
				case 1:
					cout << "Payment method: Credit card\n";
					break;
				case 2:
					cout << "Payment method: Cash\n";
					break;
				}
				i++;

				nodePtr = nodePtr->next;
				continue;
				

			}
			else
				nodePtr = nodePtr->next;
			continue;
		}
		

	}
}


void Airlines::checkSeat()
{
	bool f = true;
	if (C == 'B' || C == 'b') //for 1 to 20 are bussnes seats
	{
		while (f)
		{
			cout << "please select a seat from 1 to 20\n";
			cin >> s;
			if (s>0 && s<21)
			{
				for (int i = 0; i < 60; i++)
				{
					q = S[v][i];
					if (q==s)
					{
						cout << "seat available\n";
						for ( ; i < 60 - i; i++)
							S[v][i] = S[v][i + 1];
						f = false;
						break;
					}
					
				}
				if (f)
				{
					cout << "seat unavailable\n";
				}
				else
				{
					break; //not sure why we added that but it works are we are too scared to remove it
				}
			}
			else
			{
				cout << "please select a valid seat\n";
			}
		}
	}
	else //for 21 to 60 are economy seats
	{
		while (f)
		{
			cout << "please select a seat from 21 to 60\n";
			cin >> s;
			if (s > 20 && s < 61)
			{
				for (int i = 0; i < 60; i++)
				{
					q = S[v][i];
					if (q == s)
					{
						cout << "seat available\n";
						for (; i < 60; i++)
						{
							S[v][i] = S[v][i + 1];
						}
						
						f = false;
					
					}

				}
				if (f)
				{
					cout << "seat unavailable\n";
				}
				else
				{
					break;
				}
			}
			else
			{
				cout << "please select a valid seat\n";
			}
		}
	}
}

void Airlines::makeseats()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			S[i][j] = j + 1;
		}
	}
}
