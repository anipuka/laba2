//user name input and output program
#include <iostream>
   #include <string> 
   int main() {
       std::string name;
       std::cout << "Введите ваше имя: ";
       std::cin >> name; //entering the user name
       std::cout << "Hello, world from @" << name << std::endl;
     // We use std::cout and std::endl to avoid name conflicts.
       return 0;
   }
