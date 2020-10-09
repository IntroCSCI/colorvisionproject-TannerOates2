# RGB to Hex Color Code

## Description

The program takes input from a file and stores it as color and r,g,b then it takes the r,g,b values and outputs a hex color code.

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
Please enter the file to be opened:
rgb.txt
Color: color1
R: 190
G: 190
B: 190
Color: color2
R: 20
G: 20
B: 100
Color: color3
R: 130
G: 140
B: 50
#82328c
```

## C++ Guide

### Variables and Data Types
I used stringstream to hold hex values.
I used the integer data type to store the variables r,g,b. 
I used string to store the filename, rgb to hex color code, lines to store the lines from the txt file,and  color to store the color.
I used istringstream to store multiple values.
I used char to store the variable choice enabling the program to run a different file.

### Input and Output

The program asks for the user to input a file name. It also asks the user if they want to analyze another file.


### Decisions

I used if/else statements to determine if the file was open or not.

### Iteration

I used do and while loops. I used while to get the lines form the .txt file then used a do/while loop in order to run the program for different files at the users request.

### File Input and Output

The user enters their file so that the program can text the text within and store it.  The program also outputs the files text in the same format.