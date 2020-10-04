#include "gtest/gtest.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include "RegionInfo.h"

class RegionInfoTest : public ::testing::Test
{

protected:
    void SetUp()
    {

        std::fstream fin;
        fin.open("countries.csv");
        std::vector<std::string> row;

        std::string line, word;

        while(!fin.eof())
        {
            row.clear();
            getline(fin,line);

            std::stringstream s(line);

            while(getline(s,word,','))
            {
                row.push_back(word);
            }

            long int area;
            int GDP,seasons;
            std::string Country,region,population,coastline;
            double Literacy;
//   std::string arr[10] = {row[0],row[1],row[2],row[3],row[4],row[5],row[6],row[7],row[8],row[9]};

            std::vector< int> num;

            for(int i=0; i<10 ; i++)
            {
                int n = atoi(row[i].c_str());
                num.push_back(n);

            }
            Country = num[0];
            region = num[1];
            population = (num[2]);
            area = num[3];
            coastline = num[4];
            GDP = num[5];
            Literacy = num[6];
            seasons = num[7];

            // dummy.add_Country(Country,region,population,area,coastline,GDP,Literacy,seasons);


        }

    }
    void TearDown() {}

    RegionInfo dummy;

};

/*TEST_F(RegionInfoTest,AddCountry)
{
      // dummy.remove_patient(1);
    EXPECT_STREQ("INVYS",dummy.getCountry());
}*/
TEST_F(RegionInfoTest,MaxGDP)
{
    EXPECT_EQ(20000,dummy.max_GDP());

}


