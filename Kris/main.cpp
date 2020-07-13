using namespace std;
#include "Phone.h"

#include <iostream>

int main()
{
    Phone phone0 = new Phone();
    Phone phone1 = new Phone(943245, "James", 4376, false);
    Phone phone2 = new Phone(237609, "John", 5123, true);
    Phone phone3 = new Phone(459845, "Alex", 6782, false);
    Phone phone4 = new Phone(phone3);

    phone0.output();
    phone1.output();
    phone2.output();
    phone3.output();
    phone4.output();

    phone0.~Phone();
    phone1.~Phone();
    phone2.~Phone();
    phone3.~Phone();
    phone4.~Phone();

    cout << endl;
    cout << endl;

    Phone masPhone[3];
    for (int i = 0; i < 3; i++)
    {
        masPhone[i].input();
    }
    for (int i = 0; i < 3; i++)
    {
        masPhone[i].output();
        masPhone[i].~Phone();
    }

}

