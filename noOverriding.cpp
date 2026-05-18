#include <iostream>
using namespace std;

class baseClass {
public:
    virtual void perkenalan() {
        cout << "Hallo saya function dari base class" << endl;
    }
};
class derivedClass : public baseClass {
public:
    void perkenalan() {
        cout << "Hallo saya function dari derived class" << endl;
    }
};