#ifndef HELPERMETHODSANDVALUES_HPP
#define HELPERMETHODSANDVALUES_HPP
#include <map>
using namespace std;

/***********************************************
 *             Enum with logic values
 *  In Lukasiewicz logic L3, thirdValue should be
 *  interpreted as possibility
***********************************************/

enum logicValues{
    l_false,
    l_true,
    l_thirdValue
};

/***********************************************
 *              Methods
***********************************************/

const map <logicValues, string> valuesNameMap = {
    {l_false, "false"},
    {l_true, "true"},
    {l_thirdValue, "possibility"}
};

string toString(const logicValues &val)
{
    return valuesNameMap.find(val)->second;
}

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


#endif // HELPERMETHODSANDVALUES_HPP
