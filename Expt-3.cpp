/*  PRN:22070123106
    Experiment no:3(i)
*/
#include <iostream>
using namespace std;

int main(){
   char PRN[] = "23106"; // Array PRN[] = {'2', '3', '1', '0', '6', '\0'}
   for (int i=0;PRN[i]!='\0'; i++){ // This loop runs until PRN[i] is not equal to '\0', which means the end of the array.
    cout<<PRN[i]<<endl;
   }
return 0;
}
/*  OUTPUT
2
3
1
0
6
*/