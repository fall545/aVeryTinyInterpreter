#include <Parser.h>
#include <TokenConsumer.h>
#include <memory>
std::unique_ptr<Interpreter::TokenConsumer> tokenconsumer=std::make_unique<Interpreter::TokenConsumer>();
std::unique_ptr<Interpreter::Parser> parser=std::make_unique<Interpreter::Parser>();
void TopLevelExpressionHandle(){
    tokenconsumer->gettoken();
    switch (tokenconsumer->TokenId)
    {
    case Interpreter::FORWARD:
    case Interpreter::DEGREES:
    case Interpreter::TIMES:
    case Interpreter::BEGIN:
        parser->Statement(tokenconsumer);
        break;
    
    case Interpreter::PROGRAM:
        parser->ProgramParser(tokenconsumer);
    default:
        break;
    }
}
int main(){
    std::cout<<"READY\n";
    do 
    {
        TopLevelExpressionHandle();
        tokenconsumer->gettoken();
    }while(tokenconsumer->TokenId==Interpreter::SIGEOF);
    

}
