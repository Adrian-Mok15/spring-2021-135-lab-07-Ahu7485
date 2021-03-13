#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Remove Leading Cases"){
    CHECK(removeLeadingSpaces("       int main(){   }     ")== "int main(){.....}     ");
    CHECK(removeLeadingSpaces("               For(int i = 0; i < 10; i++){....}")== "For(int i = 0; i < 10; i++){....}");
    CHECK(removeLeadingSpaces("while(i<n) {...}       ")== "while(i<n) {...}       ");
}
TEST_CASE("counting characters"){
    CHECK(countChar("Hello World!!", 'o')==2);
    CHECK(countChar("int main(){}",'{')== 1);
    CHECK(countChar("ABCDEFGHIJLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwyz", 'x')==1);
}