#include <codegen.h>
#include <Parser.h>
using namespace Interpreter;

string& ForwardCodegen::formcode(int f){
    forward=f;
    code.append("Please move forward ");
    code.append(to_string(forward));
    code.append("\n");
    return code;
}

string& DegreesCodegen::formcode(int f){
    degrees=f;
    code.append("Please turn ");
    code.append(to_string(degrees));
    code.append(" degrees\n");
    return code;
}
string& TimesCodegen::formcode(int f){
    string tmp=code;
    for (int i = 0; i < f; i++)
    {
        code+=tmp;
    }
    
    return code;
}
