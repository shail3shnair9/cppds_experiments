/*  PRN:22070123106
    Experiment no:2(i)
*/
#include <iostream>
using namespace std;

int main() {
   int Integer_var; //Integer stores whole numbers
   float Float_var; //Float stores fractional numbers upto 7 decimal places 
   double Double_var; //Double stores fractional numbers upto 15 decimal places 
   char Char_var; //Character stores single characters enclosed in single quotes 
   bool boolean; //Boolean takes stores true (1) or false (0) 
   
   cout<< "Enter any integer value: ";
   cin >> Integer_var;
   cout<< "Enter any floating point value: ";
   cin >>Float_var ;
   cout<< "Enter any double floating point value: ";
   cin >> Double_var;
   cout<< "Enter any Character value: ";
   cin >> Char_var;
   cout<< "Enter any boolean value: ";
   cin >> boolean;
   
   cout<<"Value of Integer_var is: "<< Integer_var<<endl; //Print the value Integer_var
   cout<<"Value of Float_var is: "<< Float_var<<endl; //Print the value Float_var
   cout<<"Value of Double_var is: "<< Double_var<<endl; //Print the value Double_var
   cout<<"Value of Char_var is: "<< Char_var<<endl; //Print the value Char_var
   cout<<"Value of boolean is: "<< boolean<<endl; //Print the value boolean
return 0;
}
/*  OUTPUT
Enter any integer value: 2
Enter any floating point value: 6.42
Enter any double floating point value: 2.9419
Enter any Character value: s
Enter any boolean value: 1987
Value of Integer_var is: 2
Value of Float_var is: 6.42
Value of Double_var is: 2.9419
Value of Char_var is: s
Value of flag is: 1
*/

/*  PRN:22070123106
    Experiment no:2(ii)
*/
#include <iostream>
using namespace std;

int main() {
   int Integer_var;
   float Float_var;
   double Double_var;
   char Char_var;
   bool flag;
   
   cout<<"The size of Integer_var is: "<< sizeof(Integer_var)<<endl; //sizeof operator is used to find the size of the memory allocated to that particular data type
   cout<<"The size of Float_var is: "<< sizeof(Float_var)<<endl;
   cout<<"The size of Double_var is: "<< sizeof(Double_var)<<endl;
   cout<<"The size of Char_var is: "<< sizeof(Char_var)<<endl;
   cout<<"The size of flag is: "<< sizeof(flag)<<endl;
return 0;
}
/*  OUTPUT
The size of Integer_var is: 4
The size of Float_var is: 4
The size of Double_var is: 8
The size of Char_var is: 1
The size of flag is: 1
*/

/*  PRN:22070123106
    Experiment no:2(iii)
*/
#include <iostream>
using namespace std;

int main() {
   int Integer_var;
   float Float_var;
   double Double_var;
   char Char_var;
   bool flag;
   const float pi = 3.14; // Constant is used to fix the value of any variable --> Cannot be changed by the user
   
   cout<< "Enter any integer value: ";
   cin >> Integer_var;
   cout<< "Enter any floating point value: ";
   cin >>Float_var ;
   cout<< "Enter any double floating point value: ";
   cin >> Double_var;
   cout<< "Enter any Character value: ";
   cin >> Char_var;
   cout<< "Enter any boolean value: ";
   cin >> flag;
   
   cout<<"Value of Integer_var is: "<< Integer_var<<endl;
   cout<<"Value of Float_var is: "<< Float_var<<endl;
   cout<<"Value of Double_var is: "<< Double_var<<endl;
   cout<<"Value of Char_var is: "<< Char_var<<endl;
   cout<<"Value of flag is: "<< flag<<endl;
   cout<<"Value of pi is: "<<pi;
return 0;
}
/*  OUTPUT
Enter any integer value: 6
Enter any floating point value: 6.72
Enter any double floating point value: 15.7986185
Enter any Character value: S
Enter any boolean value: false
Value of Integer_var is: 6
Value of Float_var is: 6.72
Value of Double_var is: 15.7986
Value of Char_var is: S
Value of flag is: 0
Value of pi is: 3.14
*/

/*  PRN:22070123106
    Experiment no:2(iv)
*/
#include <iostream>
using namespace std;

int main() {
   bool imagecolor = true;
   if(imagecolor){ //Checks whether imagecolor is true or not, and if true it prints the below statement or else, prints the statement in the else part.
    cout<<"Image is colorfull";
   }else{
    cout<<"Image is not colorfull";
   }
return 0;
}
/*  OUTPUT
Image is colorfull
*/

/*  PRN:22070123106
    Experiment no:2(v)
*/
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>> a >> b;
    if(a>b){ //Checks whether a is greater than b or not, and if true it prints the below statement or else, prints the statement in the else part. --> GREATER THAN OPERATOR IS USED
        cout<<"a is greater than b";
    }else{
        cout<<"b is greater than a ";
    }
    return 0;
}
/*  OUTPUT
Enter two numbers: 7 9
b is greater than a 

Enter two numbers: 9 3
a is greater than b
*/
