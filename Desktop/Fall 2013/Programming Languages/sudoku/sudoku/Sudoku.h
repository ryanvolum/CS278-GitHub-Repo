Name: Ryan Volum
VUnet ID: volumrh
e-mail: ryan.h.volum@vanderbilt.edu
Class: CS270
Honor Code: I promise that I neither gave nor received help on this assignment


#include <iostream>
#include <string>
#include <set>
using namespace std;


#ifndef Project1_Sudoku_h
#define Project1_Sudoku_h

class Sudoku{
    
private:
    int puzzle[9][9];
    set<int> possibilities[9][9];
    set<int> rowPossiblities[9];
    set<int> columnPossibilities[9];
    set<int> boxPossibilities[9];
    
    bool possible [9][9][9];
    
    void initializeSets();
    void loadPossibilities();
    
public: 
    
//Default constructor. Should initialize the object with an empty puzzle (81 zeroes).
Sudoku();

//Reinitializes the object with a new puzzle from the specified file.
void loadFromFile(string filename);

//The entry point for your solver. Returns true if a solution was found, otherwise returns false
bool solve();

//Prints the current puzzle contents to the screen in a nicely formatted manner.
void print() const;


//Determines if two puzzles are equal.
bool equals(const Sudoku &other) const;



};


#endif
