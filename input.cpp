   #include <iostream>                 
                    
                    int main(){
    int count = 0;
            while(count < 100){
        std::cout << count << std::endl;
                        count++
}
return 0;
        }


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