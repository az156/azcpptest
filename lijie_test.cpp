#include <iostream>

class Base
{
    virtual void method()
    {
        std::cout << "from Base" << std::endl;
    }

public:
    Base() {}
    ~Base() { method(); }

    void baseMethod() { method(); }
};

class A : public Base
{
    void method()
    {
        std::cout << "from A" << std::endl;
    }

public:
    ~A() { method(); }
};

int main(void)
{
    Base base;
    base.baseMethod();
    return 0;
}