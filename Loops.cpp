/*PRN: 22070123106
Experiment no: 5(i)
*/

#include <iostream>
using namespace std;

int main() {
    int n; //Declaration of the variable n
    cout<<"Enter the value of n: ";
    cin>>n; //Initialization of n by taking input from the user
    while(n<=40){    //Prints from 1 to 50
        cout<<n<<"\t";
        n++; //Increments the value of n by 1
    }
    return 0;
}

/*OUTPUT
Enter the value of n: 1
1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20	21	22	23	24	25
26	27	28	29	30	31	32	33	34	35	36	37	38	39	40 
*/

/*PRN: 22070123106
Experiment no: 5(ii)
*/

#include <iostream>
using namespace std;

int main() {
    int n=1; //Declaration and initialization of the variable n
    do{ //Prints from 1 to 50
        cout<<n<<"\t";
        n++; //Increments the value of n by 1
    }while(n<=40); //Condition
   
       return 0;
}

/*OUTPUT
1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20	21	22	23	24	25
26	27	28	29	30	31	32	33	34	35	36	37	38	39	40	
*/

/*PRN: 22070123106
Experiment no: 5(iii)
*/

#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=7;i++){// for(Initialization; Condition; Incrementation/Decrementation)
       cout<<"Hello World"<<"\n";
    }
    return 0;
}
/*OUTPUT
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World

*/
/*PRN: 22070123106
Experiment no: 5(iv)
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: "; //Takeing total number of rows
    cin>> n;
    for(int i=1; i<=n; i++){ //Loop prints the rows
        int a=i-1;
        for(int k=1; k<=n-i; k++){ //Loop prints the blank spaces
                cout<<" ";
            }
        for(int j=1; j<=i; j++){ //Loop prints the numbers
            cout<<j;
        }
        for(int l=1; l<=i-1; l++){ //Loop prints the numbers in the reverse order
            cout<<a;
            a--;
        }
        cout<<endl;
    }
    return 0;
}

/*OUTPUT
Enter the value of n: 4
    1
   121
  12321
 1234321
*/
