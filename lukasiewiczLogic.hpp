#ifndef LUKASIEWICZLOGIC_HPP
#define LUKASIEWICZLOGIC_HPP
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

const map <logicValues, string> valuesNameMap = {
    {l_false, "false"},
    {l_true, "true"},
    {l_thirdValue, "possibility"}
};

/***********************************************
 *      Logic operators for L3
***********************************************/

/***********************************************
 *      L3 operator: negation
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
        return l_thirdValue;
    }

}

/***********************************************
 *      L3 operator: necessity
***********************************************/

inline logicValues operator&(const logicValues &a)
{
    if(l_false == a || l_true == a)
    {
        return l_true;
    }
    else
    {
        return l_false;
    }
}

/***********************************************
 *      L3 operator: possibility
***********************************************/

inline logicValues operator~(const logicValues &a)
{
    if(l_thirdValue == a || l_true == a)
    {
        return l_true;
    }
    else
    {
        return l_false;
    }
}

#endif // LUKASIEWICZLOGIC_HPP
