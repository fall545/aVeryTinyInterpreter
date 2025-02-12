#include <codegen.h>
using namespace Interpreter;

int ForwardCodegen::formcode(int f){
    forward=f;
    code.append("Please move forward ");
    code.append(to_string(forward));
    code.append("\n");
    return 0;
}

int DegreesCodegen::formcode(int f){
    degrees=f;
    code.append("Please turn ");
    code.append(to_string(degrees));
    code.append(" degrees\n");
    return 0;
}
// int TimesCodegen::formcode(){
    
//     return 0;
// }
