#include <iostream>
#include <thread>


int x = 173;
int* p_x = &x;

void stress()
{
    while(true)
    {
        ++(*p_x);
        if(*p_x = 1000000){ *p_x = -10000; } 
    }
}

int main()
{
    std::cout << "stress on\n";

    std::thread t1(stress);
    std::thread t2(stress);
    std::thread t3(stress);
    std::thread t4(stress);
    std::thread t5(stress);
    std::thread t6(stress);
    std::thread t7(stress);
    std::thread t8(stress);
    std::thread t9(stress);
    std::thread t10(stress);

    std::cin.get();
    std::cin.get();

    return 0;
}
