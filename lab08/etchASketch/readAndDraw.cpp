#include <fstream>
#include <iostream>
#include <cstdlib>

#include "etchASketch.h"
using namespace std;

int main(int argc, char* argv[]) {
    
    if (argc != 2) {
        cout << "Usage: " << argv[0] << " inputFile" << endl;
        exit(1);
    }
    // FIXME: open up the file whose name is in argv[1]
    ifstream file_name;
    file_name.open(argv[1]);
    // FIXME: create an EtchASketch object
    EtchASketch my_art('*');
    string result;
    // FIXME: read the file, one character at a time, and make our
    // etch-a-sketch move in a given direction:
    // if you read a 'l', make the EtchASketch object move left, 
    // if you read a 'r', make the EtchASketch object move right, etc.
    if (file_name.is_open())
    {
        char direction;
        while (!file_name.eof())
        {
            file_name >> direction;
            if (direction == 'l')
                my_art.left();
            else if (direction == 'r')
                my_art.right();
            else if (direction == 'u')
                my_art.up();
            else if(direction=='d')
                my_art.down();
            direction = ' ';
        }
    }
    // FIXME: print the pretty drawing that you built up in the EtchASketch object
    result=my_art.getArtwork();
    cout << result;
    return 0;
}