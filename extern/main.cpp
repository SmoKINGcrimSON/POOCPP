/*when i want to define a variable with no socpe in one translation unit or file,
and then i want to declared that variable in that file but in anothe, i could
use the extern keyboard to do thad*/
#include <iostream>

extern int num;
extern void Print();

int main(){
    std::cout<<"my num is: "<<num<<std::endl;
    Print();
    return 0;
}