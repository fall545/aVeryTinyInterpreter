#ifndef TOKENCONSUMER_H
#define TOKENCONSUMER_H

#include <iostream>
#include <string.h>

namespace Interpreter{

enum TokenIdentifier{
    PROGRAM,
    BEGIN,
    END,
    STRING,
    TURN,
    DEGREES,
    FORWARD,
    TIMES,
    DO,
    SEMICOLOM,
    SPACE,
    TOKEN,
    ERR,
    NUMBER,
    SIGEOF
};

    class TokenConsumer
    {
    // private:
        
    public:
        TokenIdentifier TokenId = ERR;
        char TokenBuff[50];
        int num=0;

        TokenConsumer();
        ~TokenConsumer();
        // TokenConsumer(const TokenConsumer&) = default; 



        int gettoken();
    };

} // namespace Interpreter

#endif