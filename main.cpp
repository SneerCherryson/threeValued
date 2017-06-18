#include <QCoreApplication>
#include <iostream>
<<<<<<< HEAD
#include "lukasiewiczLogic.hpp"
=======
#include "lukasiewiczlogic.hpp"
>>>>>>> cd4a5f5913189702e0e23dd22078ef37eff7808c
using namespace std;

int main ()
{


    int valueToNegate;
    for(;;)
    {
<<<<<<< HEAD
        cout << "Which value should be negate and use on it modal operators: 0) false, 1) true, 2) possibility, 3) end program: " << endl;
=======
        cout << "Which value should be negate: 0) false, 1) true, 2) possibility, 3) end program: " << endl;
>>>>>>> cd4a5f5913189702e0e23dd22078ef37eff7808c
        cin >> valueToNegate;
        if(3 == valueToNegate) {
            cout<<"See you later!"<<endl;
            return 0;
        }
        auto l_value = convertIntToEnum(valueToNegate);
<<<<<<< HEAD
        cout<< "Choosen value: " << toString(l_value) << endl;
        cout<< "Negation is: " << toString(!l_value) << endl;
        cout<< "Necessity opertator product result: " << toString(&l_value) << endl;
        cout<< "Possibility opertator product result: " << toString(~l_value) << endl<<endl;
=======
        cout<< "Negation is: " << toString(!l_value) << endl;
>>>>>>> cd4a5f5913189702e0e23dd22078ef37eff7808c

    }

    return 0;
}
