#include <QCoreApplication>
#include <iostream>
#include "lukasiewiczlogic.hpp"
using namespace std;

int main ()
{


    int valueToNegate;
    for(;;)
    {
        cout << "Which value should be negate: 0) false, 1) true, 2) possibility, 3) end program: " << endl;
        cin >> valueToNegate;
        if(3 == valueToNegate) {
            cout<<"See you later!"<<endl;
            return 0;
        }
        auto l_value = convertIntToEnum(valueToNegate);
        cout<< "Negation is: " << toString(!l_value) << endl;

    }

    return 0;
}
