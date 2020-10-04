#include"data.h"

data::data():m_GDP(0),m_Literacy(0),m_seasons(0) {}
data::data(int GDP,double Literacy,int seasons):m_GDP(0),m_Literacy(0),m_seasons(0) {}

int data::getGDP()
{
    return m_GDP;
}

double data::getLiteracy()
{
    return m_Literacy;
}
int data::getseasons()
{
    return m_seasons;
}
