#include <stdio.h>

struct Request
{
};

class AbstractHandler
{
    public:
        virtual void handle(Request request) = 0;
};

class HandlerA: public AbstractHandler
{
    public:
        void handle(Request request) override
        {

        }
};

class HandlerB: public AbstractHandler
{
    public:
        void handle(Request request) override
        {

        }
};

int main(int argc, char* argv[])
{
    printf("number of argument: %d execution path: %s\n", argc, argv[argc - 1]);
}