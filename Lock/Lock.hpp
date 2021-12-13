#include <iostream>
#include <mutex>
#include <memory>

using namespace std;

class Lock 
{
public:
    explicit Lock(std::mutex *pm)
        : mutexPtr(pm)
    {
        lock(mutexPtr);
    }  

    ~Lock() { unlock(mutexPtr); 
    } 

private:
    mutex *mutexPtr;
};