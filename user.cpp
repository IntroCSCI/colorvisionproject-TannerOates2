#include "user.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

// Member function implementations
void user::setName(string newName){     //sets users name
   char ch;
    for (int i = 0; i < newName.size(); ++i) {
        ch = newName[i];
        if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '-' || ch == '\'')) {
            return;
        }
    }
  name = newName;
}

string user::getName(){  //gets users name
  return name;
}

void user::setColorblind(string newAnswer){  //sets if they are colorblind
   char ch;
    for (int i = 0; i < newAnswer.size(); ++i) {
        ch = newAnswer[i];
        if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '-' || ch == '\'')) {
            return;
        }
    }
  colorblind = newAnswer;
}

string user::getColorblind(){ //gets if they are colorblind
  return colorblind;
}

void user::setType(string newType){     //sets users colorblindness type
   char ch;
    for (int i = 0; i < newType.size(); ++i) {
        ch = newType[i];
        if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '-' || ch == '\'')) {
            return;
        }
    }
  type = newType;
}

string user::getType(){  //gets users type of colorblindness
  return type;
}

user::user(){
 name = "name not provided";
}