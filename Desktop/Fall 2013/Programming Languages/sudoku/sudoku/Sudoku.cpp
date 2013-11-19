Name: Ryan Volum
VUnet ID: volumrh
e-mail: ryan.h.volum@vanderbilt.edu
Class: CS270
Honor Code: I promise that I neither gave nor received help on this assignment


#include <iostream>
#include <string>
#include <fstream>
#include "Sudoku.h"
#include <set>
using namespace std;


//Default constructor. Should initialize the object with an empty puzzle (81 zeroes).
Sudoku::Sudoku(){
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            puzzle[i][j] = 0;
        }
    }
}
    
//Reinitializes the object with a new puzzle from the specified file.
void Sudoku::loadFromFile(string filename){
    int n;
    
    ifstream myfile (filename.c_str());
    if (myfile.is_open())
    {
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                myfile>>n;
                puzzle[i][j] = n;
            }
        }
        loadPossibilities();
        myfile.close();
    }
    
    else cout << "Unable to open file"<<endl; 

}


    
//The entry point for your solver. Returns true if a solution was found, otherwise returns false
bool Sudoku::solve(){
    return false;
}
    
//Prints the current puzzle contents to the screen in a nicely formatted manner.
void Sudoku:: print() const{
    cout<<" - - - - - - - - - - - - "<<endl;
    for (int i = 0; i < 9; i++){
        cout<<"| ";
        for (int j = 0; j < 9; j++){
            cout<<puzzle[i][j]<<" ";
            
            if ((j+1)%3 == 0){
                cout<<"| ";
            }
        }

        cout<<endl;
        if((i+1)%3 == 0){
            cout<<" - - - - - - - - - - - - "<<endl;
        }
    }
}
    
    
//Determines if two puzzles are equal.
bool Sudoku::equals(const Sudoku &other) const{
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if (puzzle[i][j] != other.puzzle[i][j]){
                return false;
            }
        }
    }
    return true;
}

//Private Methods

//Initializes all sets to possibly have all possible integers (1-9)
void Sudoku:: initializeSets(){
    
    //Flag
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            for (int z = 0; z < 9; z++){
                possible[i][j][z] = true;
            }
        }
    }

    //Probably ignore
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            for (int z = 1; z < 10; z++){
                possibilities[i][j].insert(z);
            }
        }
    }
}


void Sudoku::loadPossibilities(){
    
    set<int> impossibleValues;
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            
        }
    }
}
    
    
    

