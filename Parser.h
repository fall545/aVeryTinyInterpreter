#ifndef PARSER_H
#define PARSER_H


#include <TokenConsumer.h>
#include <codegen.h>
#include <memory>
namespace Interpreter
{
    class Parser
    {
    private:
        char ProgramName[50];
         
        int Times;
        int num;


    public:
        Parser();
        ~Parser();

        int ProgramParser(std::unique_ptr<TokenConsumer>& tokenconsumer);

        int Statement(std::unique_ptr<TokenConsumer>& tokenconsumer,unique_ptr<Codegen>& codegen);

        int Statement_list(std::unique_ptr<TokenConsumer>& tokenconsumer);
    
    };
    
    
    
} // namespace Interpreter

#endif