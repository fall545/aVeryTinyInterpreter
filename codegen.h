#ifndef CODEGEN_H
#define CODEGEN_H
using namespace std;
#include <iostream>
namespace Interpreter
{
    class Codegen
    {
    private:
        
    public:
        string code;
        Codegen(){};
        ~Codegen(){};
        virtual int formcode(int f) = 0;
        int codegen(){
            cout<<code;
        }
        // virtual void getparameter(int f)=0;
    };
    
    
    class ForwardCodegen:public Codegen
    {
    private:
        int forward;
    public:
        // ForwardCodegen(int f):forward(f){};
        ForwardCodegen(){};
        // void getparameter(int f) override{forward=f;}
        ~ForwardCodegen(){};
        string& formcode(int f) override;
    };
    
    class DegreesCodegen: public Codegen
    {
    private:
        int degrees;
    public:
        DegreesCodegen(int d):degrees(d){};
        // void getparameter(int f) override{degrees=f;}
        DegreesCodegen(){}
        ~DegreesCodegen(){};
        string& formcode(int f) override;

    };

    class TimesCodegen: public DegreesCodegen,public ForwardCodegen
    {
    private:
        int times;
    public:
        TimesCodegen(int d):times(d),DegreesCodegen(),ForwardCodegen(){}
        ~TimesCodegen(){};
        // int formcode() override;
    };

    
    
}; // namespace Interpreter

#endif