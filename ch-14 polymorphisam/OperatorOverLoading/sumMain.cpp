#include "sum.cpp"

main()
{
    // binary operator
    ABC a1, a2;
    a1.setNumberData();
    // a2.setNumberData();
    a2 = a1++;
    a1.getNumberData();
    a2.getNumberData();
}