#include<iostream>
#include <sstream>
#include <fstream>
#include <map>

using namespace std;

//FUNCTIONS
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

void CapName(string name)   //// display name in ALL UPPER CASE LETTERS
{
  for(int i=0;name[i]!=0;i++)
	{
		if(name[i] >= 'a' && name[i] <= 'z')   
			name[i] = name[i] - 32;        
	}
	
  cout << "User Name:\n";
  
  cout<<name<<endl;
}


int main()
{                      //variables
int r,g,b;
string filename;
istringstream iss;
string line;
string color;
char choice;
string name;


cout << "What is your Name?\n";
  getline(cin,name);
CapName(name);

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