#include <iostream>
int main() {
   int code1, code2;
   char coffee;
   
  cout << "Welcome to Calculator.cpp" << endl;
  cout << "Use + for Addition, Use * for multiplication, use / for division, Use - for substraction" << endl;
  cin >> coffee;
  cout << "To make the operation you selected, enter two intergers" << endl;
  cin >> code1 >> code2;
  
 switch (coffee) {
     
   case '+':
     cout << code1 << " + " << code2 << " = " << code1 + code2;
     break;
     
   case '*':
     cout << code1 << " * " << code2 << " = " << code1 * code2;
     break;
     
   case '/':
       cout << code1 << " / "  << code2 << " = " << code1 / code2;
     break;
     
   case '-':
     cout << code1 << " - " << code2 << " = " << code1 - code2;
     break;
     
     
 }
  
} 
