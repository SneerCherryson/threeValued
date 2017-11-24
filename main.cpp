#include <iostream>
#include "lukasiewiczLogic.hpp"
using namespace std;

int main ()
{


    int valueToNegate;
    for(;;)
    {
        cout << "Which value should be negate and use on it modal operators: 0) false, 1) true, 2) possibility, 3) end program: " << endl;
        cout << "Which value should be negate: 0) false, 1) true, 2) possibility, 3) end program: " << endl;
        cin >> valueToNegate;
        if(3 == valueToNegate) {
            cout<<"See you later!"<<endl;
            return 0;
        }
        auto l_value = convertIntToEnum(valueToNegate);
        cout<< "Choosen value: " << toString(l_value) << endl;
        cout<< "Negation is: " << toString(!l_value) << endl;
        cout<< "Necessity opertator product result: " << toString(&l_value) << endl;
        cout<< "Possibility opertator product result: " << toString(~l_value) << endl<<endl;
        cout<< "Negation is: " << toString(!l_value) << endl;

    }

    return 0;
}
