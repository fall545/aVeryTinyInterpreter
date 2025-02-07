#include <iostream>
namespace Interpreter
{
    class Codegen
    {
    private:
        /* data */
    public:
        Codegen();
        ~Codegen();
        virtual int codegen() = 0;
    };
    
    
    class ForwardCodegen:public Codegen
    {
    private:
        int forward;
    public:
        ForwardCodegen(int f);
        ~ForwardCodegen();
        int codegen() override{}
    };
    
    class DegreesCodegen: public Codegen
    {
    private:
        int degrees;
    public:
        DegreesCodegen(int d);
        ~DegreesCodegen();
        int codegen() override{}
    };
    

    
    
}; // namespace Interpreter

