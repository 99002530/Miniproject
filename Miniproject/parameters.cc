#include "parameters.h"

parameters::parameters():m_population(""), m_area(0),m_coastline("") {}
parameters::parameters(std::string population,long int area,std::string coastline):
    m_population(population),m_area(area),m_coastline() {}

std::string parameters::getPopulation()
{
    return m_population;
}

long int parameters::getArea()
{
    return m_area;
}

std::string parameters::getCoastLine()
{
    return m_coastline;
}
