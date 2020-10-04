#pragma once
#ifndef DATA_H_INCLUDED
#define DATA_H_iNCLUDED
// DATA_H_INCLUDED
//#include "region.h"
class data
{
    int m_GDP;
    double m_Literacy;
    int m_seasons;

public:
    data();
    data(int,double,int);

//getters
    int getGDP();
    double getLiteracy();
    int getseasons();
};
#endif
