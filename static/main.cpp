#include <iostream>

static int num;
static void Print();
static void Print(){
    std::cout<<"hello world.";
}

int main(){
    num = 10;
    std::cout<<"my num is: "<<num<<std::endl;
    Print();
    return 0;
}