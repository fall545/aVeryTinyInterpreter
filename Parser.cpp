#include "Parser.h"
// #include "commen.h"
using namespace Interpreter;
using namespace std;
Parser::Parser()
    {
    }
Parser::~Parser()
{
}
    
int Parser::ProgramParser(unique_ptr<TokenConsumer>& tokenconsumer){
    if(tokenconsumer->TokenBuff[0]=='\0')
    return -1;
    strcpy(ProgramName,tokenconsumer->TokenBuff);
    return 0;
}
int Parser::Statement(unique_ptr<TokenConsumer>& tokenconsumer,unique_ptr<Codegen>& codegen){
    if(tokenconsumer->TokenId==TURN){
        tokenconsumer->gettoken();
        if (tokenconsumer->TokenId!=NUMBER)
        {
            cout<<"[DEBUG] degrees reading error";
            return -1;
        }
        num=tokenconsumer->num;

        tokenconsumer->gettoken();
        if (tokenconsumer->TokenId!=DEGREES){
            cout<<"[DEBUG] degrees syntax error";
            return -1;
        }

        if(codegen->formcode(num)==-1){
            return -1;
        }
            // logMessage(INFO, "degree codegen for num");
        // cout<<"[INFO] degree codegen for "<<num<<endl;
        
    }

    else if(tokenconsumer->TokenId==FORWARD){
        tokenconsumer->gettoken();
        // cout<<"[DEBUG] forward "<<tokenconsumer->num;
        if (tokenconsumer->TokenId!=NUMBER)
        {
            cout<<"[DEBUG] degrees reading error";
            return -1;
        }
        num=tokenconsumer->num;

        if(codegen->formcode(num)==-1){
            return -1;
        }
        // cout<<"[INFO] forward codegen for "<<num<<endl;
    }
    else if(tokenconsumer->TokenId==TIMES){
        tokenconsumer->gettoken();
        if (tokenconsumer->TokenId!=NUMBER)
        {
            cout<<"[DEBUG] times reading error";
            return -1;
        }
        Times==tokenconsumer->num;
        tokenconsumer->gettoken();
        
        if (tokenconsumer->TokenId!=DO)
        {
            // cout<<"[DEBUG] "<<tokenconsumer->TokenBuff<<"stop\n\n";
            cout<<"[DEBUG] times syntax error";
            return -1;
        }
        // unique_ptr<Codegen> codegen = make_unique<TimesCodegen>(Times);
        // Codegen* codegen = new TimesCodegen(Times);
        


        Statement_list(tokenconsumer);
        

    }
    else if(tokenconsumer->TokenId==BEGIN){
        tokenconsumer->gettoken();
        Statement_list(tokenconsumer);
    }
    else{
        return -1;
    }

    return 0;
}

int Parser::Statement_list(unique_ptr<TokenConsumer>& tokenconsumer){
    while (tokenconsumer->TokenId!=END)
    {
        unique_ptr<Codegen>& codegen = make_unique<TimesCodegen>();
        Statement(tokenconsumer);
        tokenconsumer->gettoken();
        if (tokenconsumer->TokenId!=SEMICOLOM)
        {
            cout<<"[DEBUG] statement syntax error,missing a ';' "<<endl;
            return -1;
        }
        tokenconsumer->gettoken();
        
    }
    return 0;
}