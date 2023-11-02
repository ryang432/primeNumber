#include <iostream>
#include <cmath>

int main (){
    int num;
   
   std:: cout << "Please enter a number: ";
   std:: cin >> num;
   
   if(num == 1){
    std:: cout << "This is a prime number!" << '\n';
   }

   for (int i = 2; i <= num / 2; i++){

        if (num % i == 0){
            std:: cout << " This is not a prime number!" << '\n';
            break;
        }
   }
   if(num % 2 != 0 || num % 3 != 0){
    std:: cout << "This is a prime number!" << '\n';
   }




    return 0;
}