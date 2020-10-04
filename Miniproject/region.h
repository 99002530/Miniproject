#pragma once
#ifndef REGION_H_INNCLUDED
#define REGION_H_INCLUDED
// REGION_H_INNCLUDED

#include<iostream>
#include "parameters.h"
#include "data.h"
#include <string>

class region: public parameters, public data
{
    std::string m_country;
    std::string m_region;
public:
    region();
    region(std::string,std::string,std::string,long int,std::string,int,double,int);

    std::string getCountry();
    std::string getRegion();

};
#endif
