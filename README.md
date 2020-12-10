# RGB to Hex Color Code

## Description

The program takes input from a file and stores it as color and r,g,b then it takes the r,g,b values and outputs a hex color code.


# v0.2 Updates
The program now takes the rgb from a file turns it into a hex color code and then displays its respectful color. I used the public member function std::map::map.  http://www.cplusplus.com/reference/map/map/map/


# v1.0 Updates
The program now has a user class that makes a patient profile.

## Developer

Tanner Oates

## Example

Enter rgb.txt when it asks for file name 

```
g++ --std=c++11 main.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
What is your Name?
Tanner //input
Are you colorblind?
Yes //input
What type of colorblindness do you have?
Protanopia   //input
Patient Name: Tanner
Is patient Colorblind: Yes
Type of Colorblindness: Protanopia
User Id: 2091089846
Please enter the file to be opened:
rgb.txt   //input
Color: color1
R: 255
G: 0
B: 0
#ff0000
Red
Analyze another file (y/n)?
```

## C++ Guide

### Variables and Data Types
I used stringstream to hold hex values.
I used the integer data type to store the variables r,g,b. 
I used string to store the filename, rgb to hex color code, lines to store the lines from the txt file,and  color to store the color.
I used istringstream to store multiple values.
I used char to store the variable choice enabling the program to run a different file.
I also used string to hold the colors and hex colors.
I used string to hold user name.
I used string to hold if they are colorblind.
I used string to hold what type of colorblindness they have.

### Input and Output
The program ask for user name, if you are colorblind, and what type of colorblindness.

The program asks for the user to input a file name. It also asks the user if they want to analyze another file.

It outputs user information in a profile type way.
It outputs RGB, hex color code, and color.


### Decisions

I used if/else statements to determine if the file was open or not.

### Iteration

I used do and while loops. I used while loops to get the lines from the .txt file then used a do/while loop in order to run the program for different files at the users request.

### File Input and Output

The user enters their file so that the program can text the text within and store it.  The program also outputs the files text in the same format.

### Arrays/Vectors
I used an array in the getId function as a way to get a user id number.

### Functions
 I used a function to turn three rgb numbers to a hex color code.

 I also used a function to take the hex color code from the other function and determine what color it is.

I also used a function that gives the user an Id number.

I used a function to set the users name and one to get the users name for output.

I used a function to set if the user is colorblind and one to get whether the user is colorblind for output.

### Classes
I used a class to set up a user profile. 