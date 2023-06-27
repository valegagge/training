#include <thread>
#include <mutex>


using namespace std;

int data;
bool isDataReady;
mutex mymutex;

void consumer(....)
{
    for(auto i=1; i<100; i++)
    {
        
        
    }
    
}

void producer(...)
{
    for(auto i=0; i<100; i++)
    {
        //do some task
        std::lock_guard <std::mutex> lg(mymutex);
        data = std::rand();
        isDataReady = true;
        
        //notify to the consumer data is ready
    }
    
}

int main ()
{
    thread consumer_th = thread(consumer);
    thread producer_th = thread(producer);
    
    producer.join();
    consumer.join();
    
    cout << "main ending..." <<endl;
    
}