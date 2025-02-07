#include <TokenConsumer.h>
#include <codegen.h>
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

        int ProgramParser(TokenConsumer* tokenconsumer){}

        int Statement(TokenConsumer* tokenconsumer){}

        int Statement_list(TokenConsumer* tokenconsumer){}
    
    };
    
    
    
} // namespace Interpreter
