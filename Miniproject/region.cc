#include "region.h"
#include<iostream>
#include <string>

region::region():parameters(),data(),m_country(""),m_region("") {}
region::region(std::string Country,std::string region,std::string population,long int area,std::string coastline,int GDP,double Literacy,int seasons):parameters(population,area,coastline),
    data(GDP,Literacy,seasons),
    m_country(Country),
    m_region(region) {}

std::string region ::getCountry()
{
    return m_country;
}
std::string region ::getRegion()
{
    return m_region;
}


