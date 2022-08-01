 #include <iostream>
 #include <string>
 #include <vector>
 #include <stdlib.h>
 #include <string>



 #define Black "\x1b[30m"
 #define Red "\x1b[31m"
 #define Green "\x1b[32m"
 #define Yellow "\x1b[33m"
 #define Blue "\x1b[34m"
 #define Magenta "\x1b[35m"
 #define cyan "\x1b[36m"
 #define white "\x1b[37m"

using  namespace std;

 int main()
 {
     int bal;
     int bet;

     sting name;
     
     cout << Green << "Welcome to a casino\n";
     cout << Red<< "\n\n What your name\n";
     cout << "Hello " << name << "\n";
     cout << Blue << "How Much would u like to gamble?\n";
     cin >> bal;
     count << cyan << "\n\n Your Bal is = " bal << "\n";
     system("clear");

     cout << "How much would you like to bet " << name << "?\n";
     cin >> bet;
     if(bet > bal)
     {
         cout << Yellow << "Your bet cant be more then your bal\n";
         cout << Red<< "re-enter your bet\n";
         cin >> bet;
     }
     do
     {
         int dice;

         int guess;
         cout << "Pick A number between 1-5\n";
         cin >> guess; 
         if (guess <= 0 || guess => 10)
         {
             cout << Red<< "re-enter your bet\n";
             cin >> guess;
         }
         while (guess <= 0 || guess > 10)
         {
             dice = rand()%10 + 1;
             if(dice == guess)
             {
                 cout << Green << "U won!!!" << bet * 10 + bal = bal << "\n";
             }
             else{
                 cout << Red << "dam u lost\n";
                 exit(9);
             }
         }
         
     }

 }
