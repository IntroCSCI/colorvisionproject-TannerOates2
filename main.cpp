#include<iostream>
#include <sstream>
#include <fstream>

using namespace std;

string rgbtohex(int r, int g, int b, bool with_head)    //the following turns rgb values to hex values.
{
  stringstream ss;
  if (with_head)
  ss<< "#";
  ss<<hex<<(r << 16 | g << 8 | b );
  return ss.str();
}
int main()
{                         //variables
int r,g,b;
string filename;
istringstream iss;
string line;
string color;
char choice;
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

cout<< "Analyze another file (y/n)?"<<endl;   
cin>>choice;
cin.ignore();
}while(choice=='y');

    return 0;
}