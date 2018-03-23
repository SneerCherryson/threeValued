#ifndef HELPERMETHODSANDVALUES_HPP
#define HELPERMETHODSANDVALUES_HPP
#include "lukasiewiczLogic.hpp"
#include <iostream>
#include <sstream>

/***********************************************
 *              Methods
***********************************************/

string toString(const logicValues &val)
{
    return valuesNameMap.find(val)->second;
}

// This method will be replaced by tamplate when others than Lukasiewicz logic will be included
logicValues convertIntToEnum (int toBeConvert)
{
    switch (toBeConvert) {
    case 0:
        return l_false;
    case 1:
        return l_true;
    case 2:
        return l_thirdValue;
    default:
        cout << "Wrong value. 1/2 that is possiblity will be set." << endl;
    }
    return l_thirdValue;
}

void displayMenu()
{

    for(;;)
    {
        int valueToNegate;
        cout << "Which value should be negate: 0) false, 1) true, 2) possibility, 3) end program: " << endl;
        cin>>valueToNegate;

        if(cin.fail())
        {
            cout<<"It is wrong type value, please insert proper one."<<endl;
            break;
        }
        if(3 == valueToNegate) {
            cout<<"See you later!"<<endl;
            return;
        }
        auto l_value = convertIntToEnum(valueToNegate);
        cout<< "Choosen value: " << toString(l_value) << endl;
        cout<< "Negation is: " << toString(!l_value) << endl;
        cout<< "Necessity opertator product result: " << toString(&l_value) << endl;
        cout<< "Possibility opertator product result: " << toString(~l_value) << endl<<endl;
    }
}


#endif // HELPERMETHODSANDVALUES_HPP
