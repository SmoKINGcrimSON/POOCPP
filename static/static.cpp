/*when i create a variable, method, etc. 
with no scope with the same name on multiple files
I'm going to have a linked error, becouse more than one of my translation units
will have the same variable with that name and im going to have and multiple
definition of the variable, to avoid that, i will declare the variable with the 
special keyboar "static".*/ 
#include <iostream>

static int num; //before "int num"
static void Print();
static void Print(){
    std::cout<<"hello world.";
}