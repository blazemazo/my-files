#include <iostream>
using namespace std;
int main() {
    
    char opi;

   cout << "Does 10 + 11 = 21 Y/N" << endl;
   cin >> opi;
   switch (opi) {
       
       case 'Y':
       cout << "Correct!";
       break;
       
       case 'N':
       cout << "Incorrect!?!";
       break;
       
   }
    
    
    
    
}