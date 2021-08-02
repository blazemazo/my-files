#include <iostream>
using namespace std;

class MyClass {         // The class
  public:               // Access specifier
    void myMethod() {   // Method/function
      cout << "Using myMethod1...." << endl;
    }
}; 
class myClass2 {
    public:
    void myMethod2() {
        cout << "Using myMethod2...";
    }
};

int main() {
   myClass2 myObj2;
    MyClass myObj;
    myObj.myMethod();
  myObj2.myMethod2();
  
  return 0;
}
