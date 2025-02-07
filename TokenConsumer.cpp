#include "TokenConsumer.h"
using namespace Interpreter;
TokenConsumer::TokenConsumer()
{
}

TokenConsumer::~TokenConsumer()
{
}

int isNumber(const char *str) {
    if (*str == '\0') return 0; // 空字符串不是数字
    while (*str) {
        if (*str < '0' || *str > '9') return 0; // 只允许 0-9
        str++;
    }
    return 1;
}
int TokenConsumer::gettoken(){
    int cnt=0;
    char c;
    int i =0;
    while (c=getchar() && c==' ');
    do
    {
        if (c=='"') continue;
        TokenBuff[i++]=c;
    } while (c=getchar() && c==' ');
    TokenBuff[i]='\0';
    
    if (strcmp(TokenBuff, "program") == 0) {
        TokenId = PROGRAM;
    } else if (strcmp(TokenBuff, "begin") == 0) {
        TokenId = BEGIN;
    } else if (strcmp(TokenBuff, "end") == 0) {
        TokenId = END;
    } else if (strcmp(TokenBuff, "string") == 0) {
        TokenId = STRING;
    } else if (strcmp(TokenBuff, "turn") == 0) {
        TokenId = TURN;
    } else if (strcmp(TokenBuff, "degrees") == 0) {
        TokenId = DEGREES;
    } else if (strcmp(TokenBuff, "forward") == 0) {
        TokenId = FORWARD;
    } else if (strcmp(TokenBuff, "times") == 0) {
        TokenId = TIMES;
    } else if (strcmp(TokenBuff, "do") == 0) {
        TokenId = DO;
    } else if (strcmp(TokenBuff, ";") == 0) {
        TokenId = SEMICOLOM;
    } else if (isNumber(TokenBuff)) {
        num = atoi(TokenBuff); 
        TokenId = NUMBER;
    }
    else if(c==';'){
        TokenId = SEMICOLOM;
     }
     else if(c==EOF){
        TokenId = SIGEOF;
        return 0;
     }
     else {
        TokenId = TOKEN;
    }
    


    return 0;
}