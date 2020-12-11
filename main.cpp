#include<iostream>
#include <sstream>
#include <fstream>
#include <map> //for toColorName function
#include "user.h"
#include <ctime> //for random number generator/ Id function

using namespace std;

//Function Prototypes
string rgbtohex(int r, int g, int b, bool with_head);
string toColorName(const string &hexColor);
int * getId();



int main()
{                      //variables
int r,g,b;
string filename;
istringstream iss;
string line;
string color;
char choice;
string name;
user patient;
user user;
string colorblind;
string type;
int *p;//pointer to int


cout << "What is your Name?\n";
getline(cin,name);

patient.setName(name); //sets patient name

cout<<"Are you colorblind?\n";
getline(cin,colorblind);

patient.setColorblind(colorblind); //sets if patient is colorblind

cout<<"What type of colorblindness do you have?"<<endl;
getline(cin,type);

patient.setType(type); //sets patients colorblindness type

cout<<"Patient Name: "<<patient.getName()<<endl;//outputs patient name
cout<<"Is Patient Colorblind: "<<patient.getColorblind()<<endl;//outputs if they are colorblind
cout<<"Type of Colorblindness: "<< patient.getType()<<endl;//outputs type of colorblindness
p = getId(); //outputs random number
for( int i = 0; i < 1; i++) {
  cout<<"Confirmed User Id: "<<*(p + i)<<endl; //outputs confirmed User Id.
}

do{
 
cout << "Please enter the file to be opened:\n";
getline(cin,filename);
 
 
ifstream ReadFile; 
ReadFile.open(filename); 

if(ReadFile.fail()) 
{
  cout<<"Could not open "<<filename<<endl;
}
else
{
   while ( getline (ReadFile,line) )     //getting lines from .txt and storing it
  {
    iss.clear();
    iss.str(line);
    iss>>color>>r>>g>>b;                //outputs the file info
    cout<< "Color: "<<color<<endl;
    cout<< "R: "<<r<< endl;
    cout<< "G: "<<g<< endl;
    cout<< "B: "<<b<< endl;
  }
}
ReadFile.close();


cout<<rgbtohex(r,b,g,true)<<endl;   //outputs hex color code
cout<<toColorName(rgbtohex(r,g,b,true))<<endl; //outputs color



cout<< "Analyze another file (y/n)?"<<endl;   
cin>>choice;
cin.ignore();
}while(choice=='y');
   
    return 0;
}                            
  //END OF MAIN


//Function Definitions

string rgbtohex(int r, int g, int b, bool with_head)    //the following turns rgb values to hex values.
{
  stringstream ss;
  if (with_head)
  ss<< "#";
  ss<<hex<<(r << 16 | g << 8 | b );
  return ss.str();
}

string toColorName(const string &hexColor) //takes hex color code returns its respectful color
{
  static const map<string, string> colors{
      {"#000000", "Black"},
      {"#0000ff", "Blue"},
      {"#00ff00", "Green"},
      {"#ff0000", "Red"},
      {"#ffffff", "White"}};
  return colors.at(hexColor);
}

//Random Number Generator
int * getId(){

   static int  r[10];

   srand((unsigned)time(NULL));// set the seed
   
   for (int i = 0; i < 1; ++i) {
      r[i] = rand();
      cout<<"User Id: "<<r[i]<< endl;
   }

   return r;
}