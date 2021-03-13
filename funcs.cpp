#include <iostream>
#include <cctype>
#include "funcs.h"

// add functions here

std::string removeLeadingSpaces(std::string line){
    int i = 0;
    while(isspace(line[i])){
        i++;
        continue;
    }
    return line.substr(i,line.length()-i);
    }

int countChar(std::string line, char c){
    int count = 0;
    for(char i: line){
        if(i==c){
            count++;
        }
    }
    return count;
}

