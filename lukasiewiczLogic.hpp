#ifndef LUKASIEWICZLOGIC_HPP
#define LUKASIEWICZLOGIC_HPP
#include "helperMethodsAndValues.hpp"

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
