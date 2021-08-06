#include <iostream>
#include <string>
using namespace std;

class myClass {
    public:
     
    string cape;  
};
int main() {
    
    
    myClass myObj();
    myClass package1;
    
   package1.cape = "Welcome";
   
   
   cout << package1.cape;
}