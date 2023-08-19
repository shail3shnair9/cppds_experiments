/*
PRN: 22070123106
Experiment no: 4(i)
*/

#include <iostream>
using namespace std;
int main(){
    int i= 67, j,set,reset;
    set = (67|8); // | --> Bitwise OR --> 0|1 = 1 --> Set means to convert 0 to 1 Bitwise OR
    reset= (67&191); // & --> Bitwise AND --> 0&1 = 0 , 1&1 = 1 --> Reset means to convert 1 to 0, using Bitwise AND
    cout<<"Value of set is: "<<set<<endl<<"Value of set is: "<<reset;
    return 0;
}
/* OUTPUT
Value of set is: 75
Value of set is: 3
*/

/*
PRN: 22070123106
Experiment no: 4(ii)
*/
#include <iostream>
using namespace std;
int main(){
    int a=12,b,c;
    b=a<<1; // Left binary shift by 1 bit --> a<<1 
    c=a>>1; // Right binary shift by 1 bit --> a>>1
    cout<<"Left binary shift value is: "<<b<<endl<<"Right binary shift value is: "<<c;
    return 0;
}
/*OUTPUT
Left binary shift value is: 24
Right binary shift value is: 6
*/

/*
PRN: 22070123106
Experiment no: 4(iii)
*/
#include <iostream>
using namespace std;
int main(){
    int i=50,set_bit,reset_bit,set,reset;
    cout<<"Enter the bit to be set: ";
    cin>>set_bit;
    cout<<"Enter the bit to be reset: ";
    cin>>reset_bit;
    set=i|(1<<set_bit);
    reset=i&(~1<<reset_bit);
    cout<<"Set bit - "<<set<<endl<<"Reset bit - "<<reset;
    return 0;
}
/* OUTPUT 
Enter the bit to be set: 6
Enter the bit to be reset: 1
Set bit - 114
Reset bit - 48
*/