#include <iostream>
#include <vector>
#include <algorithm>


class Subject; 

class Observer_Strategy 
{ 
public:
    virtual ~Observer_Strategy () = default;
    virtual std::string observer_variables( int var1, int var2, int var3, int var4, int var5) = 0;
    virtual void verify(Subject&) = 0;
};

class Subject 
{ 
    private:
        std::vector<Observer_Strategy*> observers; 
    public: 
        virtual ~Subject() = default;
        void attach(Observer_Strategy& o) { observers.push_back(&o); }
        void detach(Observer_Strategy& o)
        {
            observers.erase(std::remove(observers.begin(), observers.end(), &o));
        }
        void notify()
        {
            for (auto* o : observers) {
                o->verify(*this);
            }
        }

};