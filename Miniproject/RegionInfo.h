#ifndef REGIONINFO_H_INCLUDED
#define REGIONINFO_H_INCLUDED
// REGIONINFo_H_INCLUDED

#include "region.h"
#include<list>
#include<iterator>

class RegionInfo
{
    std::list<region>regions;
public:
    void add_Country(std::string Country,std::string region,std::string population,long int area,std::string coastline,int GDP, double Literacy, int seasons);
    void remove_Country(std::string Country);
    double average_literacy(double Literacy);
    int max_GDP();
    void display();
    int NumberOfCountries();

};
#endif
