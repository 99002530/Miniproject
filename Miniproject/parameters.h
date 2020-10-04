#ifndef PARAMETERS_H_INCLUDED
#define PARAMETERS_H_INCLUDED
// PARAMETERS_H_INCLUDED

#include<iostream>
//#include "region.h"

class parameters
{
    std::string m_population;
    long int m_area;
    std::string m_coastline;
//int GDP;
    //double literacy;
    //int seasons;

public:
    parameters();
    parameters(std::string,long int,std::string);

    //getters
    std::string getPopulation();
    long int getArea();
    std::string getCoastLine();

};
#endif
