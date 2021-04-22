#include <iostream>
#include <fstream>
#include <vector>

#include "funcs.h"

int main()
{
    std::ifstream code;
    code.open("input.cpp");
    int tabs = 0;
    std::string line;
    std::vector<std::string> line_vector;//create a vector to store lines without tabs
    while(getline(code, line)){
    line = removeLeadingSpaces(line);
    line_vector.push_back(line);//save all the lines without tabs into the vector
    tabs = tabs - countChar(line, '}');
    for(int i = 0; i < tabs; i++){
      std::cout << "\t";
    }
    std::cout << line << '\n';
    tabs = tabs + countChar(line, '{');
  }
  for(int i = 0; i<line_vector.size(); ++i){//prints out the lines without the tabs
      std::cout << line_vector[i] << "\n";
  }
  return 0;
}
