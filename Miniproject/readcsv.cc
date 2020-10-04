#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<vector>
#include<iterator>

class CsvRow { //row search
  public:
    std::string const& operator[](std::size_t index) const {
        return m_data[index];
    }
    std::size_t size() const {
        return m_data.size();
    }
    void readNextRow(std::istream& str) {
        std::string line;
        std::getline(str,line);
        std::stringstream lineStream(line);
        std::string cell;

        m_data.clear();
        while(std::getline(lineStream,cell,',')) {
            m_data.push_back(cell);
        }
        if(!lineStream && cell.empty()) {
            m_data.push_back("");
        }
    }
  private:
    std::vector<std::string> m_data;
};
std::istream& operator>>(std::istream& str,CsvRow& data) {
    data.readNextRow(str);
    return str;
}
int main() {
    std::ifstream file1("countries.csv");
    CsvRow row;
    int n;
    std::cout<<"Enter 1 search with countries:: "<<"\n";
    //std::cout<<row[1]<<"\n";
    std::cin>>n;
    if(n==1) {
        std::string C;
        std::cout<<"Enter the country"<<"\n";
          std::cin>>C;

         //std::cout<<R<<"\n";
        while(file1>>row) {
                //std::cout<<row[0]<<"\n";
            if(row[0]==C) {
                    std::cout<<"Enter 2 to get Region:: "<<"\n";
                    std::cout<<"Enter 3 to get Population:: "<<"\n";
                    std::cout<<"Enter 4 to get Area:: "<<"\n";
                    std::cin>>n;
                    if(n==2){
                        std::cout<<"Country:"<<row[0]<<" - "<<"Region:"<<row[1]<<"\n";
                    }
                    else if(n==3){
                        std::cout<<"Country:"<<row[0]<<" - "<<"Population:"<<row[2]<<"\n";
                    }
                    else if(n==4){
                        std::cout<<"Country:"<<row[0]<<" - "<<"Area:"<<row[3]<<"\n";
                    }
                    else{ std::cout<<"Invalid"<<"\n";
                    }
                    //std::cout<<"Area: " <<row[1]<<" "<<"R: "<<row[2]<<" "<<"%" <<row[3]<<"\n";
            }
    }
    }
    else {
        std::cout<<"sorry!wrong"<<std::endl;
    }
    return 0;
}

