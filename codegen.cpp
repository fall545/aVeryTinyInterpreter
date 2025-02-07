#include <codegen.h>
using namespace Interpreter;
Codegen::Codegen()
{
}

Codegen::~Codegen()
{
}


ForwardCodegen::ForwardCodegen(int f):forward(f)
{

}
    
ForwardCodegen::~ForwardCodegen()
{
}
int ForwardCodegen::codegen(){
    std::cout<<"Please move forward "<<forward<<std::endl;
    return 0;
}

DegreesCodegen::DegreesCodegen(int d):degrees(d)
{
}

DegreesCodegen::~DegreesCodegen()
{
}
int DegreesCodegen::codegen(){
    std::cout<<"Please turn "<<degrees<<" degrees"<<std::endl;
    return 0;
}