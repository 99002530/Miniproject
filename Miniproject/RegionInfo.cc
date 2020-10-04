#include "RegionInfo.h"
#include "data.h"
#include "parameters.h"
#include "region.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>


/*void RegionInfo::add_Country(std::string Country,std::string region,std::string population,long int area,std::string coastline,int GDP,double Literacy,int seasons)
{
    region.push_back( RegionInfo(Country,region,population,area,coastline,GDP,Literacy,seasons) );
}*/
void RegionInfo:: remove_Country(std::string Country)
{
    std::list<region> :: iterator iter;
    for(iter=regions.begin(); iter!=regions.end(); ++iter)
    {
        if(iter->getCountry() == Country)
        {
            regions.erase(iter);
            break;
        }

    }
}
int RegionInfo:: max_GDP()
{
    std::list<region> :: iterator iter = regions.begin();
    int maxi = iter-> getGDP();
    iter++;

    for(; iter!=regions.end(); ++iter)
    {
        if(maxi < iter->getGDP())
        {
            maxi = iter->getGDP();
        }
    }

    return maxi;
}

void RegionInfo:: display()
{
    std::list<region> :: iterator iter;
    for(iter=regions.begin(); iter!=regions.end(); ++iter)
    {
        std::cout << iter->getCountry() << "," << iter->getPopulation() << "," << iter->getArea() << iter->getseasons() <<std::endl;
    }

}
