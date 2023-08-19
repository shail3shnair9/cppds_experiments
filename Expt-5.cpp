/*PRN: 22070123106
Experiment no: 5(i)
*/
#include <iostream>
using namespace std;

int main() {
   int a;
   cout<<"Enter the value a: ";
   cin>>a;
   if(a%2==0){ //Checks whether the number is even or odd
       if(a==0){//Checks whether the number is equal to 0 or not, if true then it prints Zero but if not, then it prints the statement in the else part.
           cout<<"Zero";
       }else{
           cout<<"Even number";
           
       }
   }else{//If the initial condition fails then this statement is executed.
           cout<<"Odd number";
       }
       return 0;
}

/*OUTPUT
Enter the value a: 68
Even number

Enter the value a: 101
Odd number
Enter the value a: 0
Zero
*/

/*PRN: 22070123106
Experiment no: 5(ii)
*/

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the 3 numbers you want to compare: ";
    cin>>a>>b>>c;
    if(a>b && a>c){ //Compares whether the value of a is greater than b and c
        cout<<a<<" is the greatest";
    }
    else if(b>c && b>a){ //Compares whether the value of b is greater than b and c
        cout<<b<<" b is the greatest"<<b;
    }
    else{ //If both the conditions fail then this statement is executed.
        cout<<c<<" is the greatest"<<c;
    }
    return 0;
}
/* OUTPUT
Enter the 3 numbers you want to compare: 14 15 78  
78 is the greatest
*/

/*PRN: 22070123106
Experiment no: 5(iii)
*/
#include <iostream>
using namespace std;

int main() {
    float a,b;
    int n;
    cout<<"Enter two numbers of a,b: ";
    cin>>a>>b;
    cout<<"Enter the value n: ";
    cin>>n;
    
    switch(n){
        case 1: cout << "The sum of a and b is: " << a+b <<endl; //For n=1, it prints sum of two numbers
        break;
        case 2: cout << "The difference of a and b is: " << a-b<<endl; //For n=2, it prints the difference of two numbers
        break;
        case 3: cout << "The product of a and b is: " << a*b<<endl; //For n=3, it prints the product of two numbers
        break;
        case 4: cout << "The division of a and b is: " << a/b<<endl; //For n=4, it prints the division of two numbers
        break;
    }
    return 0;
}
/*OUTPUT
Enter two numbers of a,b: 5 9
Enter the value n: 1
The sum of a and b is: 14

Enter two numbers of a,b: 8 7
Enter the value n: 2
The difference between a and b is: 1

Enter two numbers of a,b: 6 8
Enter the value n: 3
The product of a and b is: 48

Enter two numbers of a,b: 28 7
Enter the value n: 4
The division of a and b is: 4
*/

/*PRN: 22070123106
Experiment no: 5(iv)*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value n: ";
    cin>>n;
    
    switch(n){
        case 1: cout << "Monday"; //For n=1, it prints Monday
        break;
        case 2: cout << "Tuesday"; //For n=2, it prints Tuesday
        break;
        case 3: cout << "Wednesday"; //For n=3, it prints Wednesday
        break;
        case 4: cout << "Thursday"; //For n=4, it prints Thursday
        break;
        case 5: cout << "Friday"; //For n=5, it prints Friday
        break;
        case 6: cout << "Saturday"; //For n=6, it prints Saturday
        break;
        case 7: cout << "Sunday"; //For n=7, it prints Sunday
        break;
        default: //If none of the conditions is satisfied then this gets executed
        cout<<"Wrong input";
    }
    return 0;
}

/*OUTPUT
Enter the value n: 1
Monday
Enter the value n: 2
Tuesday
Enter the value n: 3
Wednesday
Enter the value n: 4
Thursday
Enter the value n: 5
Friday
Enter the value n: 6
Saturday
Enter the value n: 7
Sunday
Enter the value n: 8
Wrong input
*/