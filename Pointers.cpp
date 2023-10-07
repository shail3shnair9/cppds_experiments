/*PRN: 22070123106
Experiment No: 10(i)
*/
#include <iostream>
using namespace std;
int main(){
   int a=10,*aptr;
   aptr=&a;
   cout<<"The original value of a is: "<<*aptr<<endl;
   cout<<"The address of a is: "<<aptr<<endl;
   *aptr=15;
   cout<<"The new value of a is: "<<*aptr;
    return 0;
}
/*OUPUT
The original value of a is: 10
The address of a is: 0x7fff6d64eef4
The new value of a is: 15
*/

/*PRN: 22070123106
Experiment No: 10(ii)
*/
#include <iostream>
using namespace std;
int main(){
   int a=10,*aptr;
   aptr= &a;
   cout<<"The original value of a is: "<<*aptr<<endl;
   cout<<"The original address of a is: "<<aptr<<endl;
   *aptr=*aptr+1;
   aptr++;
   &aptr= *aptr;
   cout<<"The incremented value of a is: "<<*aptr<<endl;
   cout<<"The new address of a is: "<<aptr<<endl;
    return 0;
}
/*OUPUT
The original value of a is: 10
The original address of a is: 0x7ffee6ade564
The incremented value of a is: 11
The new address of a is: 0x7ffee6ade564
*/

/*PRN: 22070123106
Experiment No: 10(iii)
*/
#include <iostream>
using namespace std;

void increment(int *a){
    (*a)++;
 }
int main(){
   int a=10;
   cout<<"The original value of a: "<<a<<endl;
   increment(&a);
   cout<<"The incremented value of a is: "<<a<<endl;
   return 0;
}
/*OUPUT
The original value of a: 10
The incremented value of a is: 11
*/

/*PRN: 22070123106
Experiment No: 10(iv)
*/
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
 }
int main(){
   int a=10,b=15;
   cout<<"The original value of a and b is: "<<a<<"\t"<<b<<endl;
   swap(&a,&b);
   cout<<"The value of a and b after swapping is: "<<a<<"\t"<<b<<endl;
   return 0;
}
/*OUPUT
The original value of a and b are: 10	15
The value of a and b after swapping is: 15	10
*/
