#ifndef USER_H
#define USER_H
#include <string>
#include <vector>

using std::string;
using std::vector;

class user
{
  private: 
    string name;
    string colorblind;
    string type;
  
  public: 
    // Member function prototypes
    void setName(string);
    string getName();
    void setColorblind(string);
    string getColorblind();
    void setType(string);
    string getType();
    user();
};

#endif