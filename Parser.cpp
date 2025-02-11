#include "Parser.h"
using namespace Interpreter;
Parser::Parser()
    {
    }
Parser::~Parser()
{
}
    
int Parser::ProgramParser(std::unique_ptr<Interpreter::TokenConsumer>& tokenconsumer){
    if(tokenconsumer->TokenBuff[0]=='\0')
    return -1;
    strcpy(ProgramName,tokenconsumer->TokenBuff);
    return 0;
}
int Parser::Statement(std::unique_ptr<Interpreter::TokenConsumer>& tokenconsumer){
    if(tokenconsumer->TokenId==TURN){
        tokenconsumer->gettoken();
        if (tokenconsumer->TokenId!=NUMBER)
        {
            std::cerr<<"degrees reading error";
            return -1;
        }
        num=tokenconsumer->num;

        tokenconsumer->gettoken();
        if (tokenconsumer->TokenId!=DEGREES){
            std::cerr<<"degrees syntax error";
            return -1;
        }

        DegreesCodegen degreesCodegen(num);
        if(degreesCodegen.codegen()==-1){
            return -1;
        }
    }

    else if(tokenconsumer->TokenId==FORWARD){
        tokenconsumer->gettoken();
        if (tokenconsumer->TokenId!=NUMBER)
        {
            std::cerr<<"degrees reading error";
            return -1;
        }
        num=tokenconsumer->num;
        ForwardCodegen forwardcodegen(num);

        if(forwardcodegen.codegen()==-1){
            return -1;
        }
    }
    else if(tokenconsumer->TokenId==TIMES){
        tokenconsumer->gettoken();
        if (tokenconsumer->TokenId!=NUMBER)
        {
            std::cerr<<"times reading error";
            return -1;
        }
        Times==tokenconsumer->num;

        if (tokenconsumer->TokenId!=DO)
        {
            std::cerr<<"times syntax error";
            return -1;
        }

        for (int i = 0; i < Times; i++)
        {
            Statement(tokenconsumer);
        }

    }
    else if(tokenconsumer->TokenId==BEGIN){

    }
    else{
        return -1;
    }

    return 0;
}

int Parser::Statement_list(std::unique_ptr<Interpreter::TokenConsumer>& tokenconsumer){
    while (tokenconsumer->TokenId!=END)
    {
        Statement(tokenconsumer);
        tokenconsumer->gettoken();
        if (tokenconsumer->TokenId!=SEMICOLOM)
        {
            std::cerr<<"statement syntax error,missing a ';' "<<std::endl;
            return -1;
        }
        
    }
    return 0;
}