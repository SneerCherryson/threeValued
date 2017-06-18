#ifndef LUKASIEWICZLOGIC_H
#define LUKASIEWICZLOGIC_H
#include <map>
using namespace std;

/***********************************************
 *             Enum with logic values
***********************************************/

enum logicValues{
    l_false,
    l_true,
    l_possibility
};

/***********************************************
 *      Logic operators for L3
***********************************************/

/***********************************************
 *      Logic operator: negation
***********************************************/

inline logicValues operator!(const logicValues &a)
{
    if(l_false == a)
    {
        return l_true;
    }
    else if(l_true == a)
    {
        return l_false;
    }
    else
    {
        return l_possibility;
    }

}


/***********************************************
 *              Methods
***********************************************/

const map <logicValues, string> valuesNameMap = {
    {l_false, "false"},
    {l_true, "true"},
    {l_possibility, "possibility"}
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
        break;
    case 1:
        return l_true;
        break;
    case 2:
        return l_possibility;
    default:
        cout << "Wrong value" << endl;
        break;
    }
}


#endif // LUKASIEWICZLOGIC_H
