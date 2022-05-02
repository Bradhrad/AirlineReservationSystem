#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Airlines
{
    struct ListNode
    {
        std::string FName;
        std::string LName;
        std::string Email;
        std::string date;
        int seat;
        char Class;
        std::string PassID;
        std::string value;
        int Dis;
        int PM;
        int CC;

        ListNode* next;
    };
    ListNode* head = NULL, * last = NULL;
public:
    Airlines()
    {
        head = NULL;
    }
    ListNode pass;
    void DataReq();                 //collects the reservation info
    void displayReservation();      //prints the reservation info on the email
    stack < int >stackname;         //used in the loyality program
    bool y = true;                  //used in some loops
    char Dis;                       //distination
    void checkSeat();               //checks if the seat is occupied or not
    int S[10][60];                  //each flight seats
    void makeseats();               //filling the array with numbers from 1 to 60
};