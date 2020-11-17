# RGB to Hex Color Code

## Description

The program takes input from a file and stores it as color and r,g,b then it takes the r,g,b values and outputs a hex color code.


# v0.2 Updates
The program now takes the rgb from a file turns it into a hex color code and then displays its respectful color.

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
Tanner Oates //input
User Name:
TANNER OATES
Please enter the file to be opened:
rgb.txt    //input
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

### Input and Output
The program ask for user name.

The program asks for the user to input a file name. It also asks the user if they want to analyze another file.

It outputs RGB, hex color code, and color.


### Decisions

I used if/else statements to determine if the file was open or not.

### Iteration

I used do and while loops. I used while loops to get the lines from the .txt file then used a do/while loop in order to run the program for different files at the users request.

### File Input and Output

The user enters their file so that the program can text the text within and store it.  The program also outputs the files text in the same format.

### Arrays/Vectors
I used an array in the CapName function so I could output the users name in all caps.

### Functions
 I used a function to turn three rgb numbers to a hex color code.

 I also used a function to take the hex color code from the other function and determine what color it is.

I also used a function that takes users name and outputs it in all caps.