#include <iostream>
#include <fstream>


#include "funcs.h"

int main()
{
  std::ifstream code;
  code.open("code.txt");
  int tabs = 0;
  std::string line;
  while(getline(code, line)){
    line = removeLeadingSpaces(line);
    tabs = tabs - countChar(line, '}');
    for(int i = 0; i < tabs; i++){
      std::cout << "\t";
    }
    std::cout << line << '\n';
    tabs = tabs + countChar(line, '{');
  }
  return 0;
}
