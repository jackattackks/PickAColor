//
//  main.cpp
//  Week4PickAColor
//
//  Created by Jackie on 2/12/21.
//
#include <iostream>
#include <string>
using namespace std;

class colorPicker{
public:
    void setElement(string zero, string one, string two, string three, string four, string five, string six ){
        colors[0] = zero;
        colors[1] = one;
        colors[2] = two;
        colors[3] = three;
        colors[4] = four;
        colors[5] = five;
        colors[6] = six;
    }

    string getAllColors(){
        for (int i = 0; i < 7; i++){
            cout << colors[i];
            cout << endl;
        }
        return colors[0];
    }

    //Have a function that randomly pick One color from the array and cout's the color.
    
    string randomColor(){
        int i = rand() % 7 + 1;
        return colors[i];
    }
private:
    string colors[7];
};

int main() {
    cout << "Name: Jackie Ocaña - ProgBucky1ClassAndObjects - Date:  2/12/21" << endl;
    colorPicker color;
    color.setElement("red", "orange", "yellow", "green", "blue", "indigo", "violet");
    cout << color.getAllColors();
    cout << endl;
    cout << color.randomColor();
    cout << endl;
    
    return 0;
}

/* Program 4 - Pick color Class

Create a class colorPicker that randomly pick a color from an array of colors: string colors[7];

Have the colors array and all functions defined in the class.

Create and use a void setElement( index, "color") function to assign values to the array elements 0 to 6: red, orange, yellow, green, blue, indigo, violet.

Have a function that prints out all the colors in the array.

Have a function that randomly pick One color from the array and cout's the color.

(Research Random number code)

Run your Code - Produce the correct output and Turn it in for credit

 */
