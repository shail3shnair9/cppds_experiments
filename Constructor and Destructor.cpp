/*Experiment-(i)*/

#include<iostream>
using namespace std;

class construct{
    public:
    int a, b, d;
    float c;
    construct(int a, int b){
        c = a+b;
    }
    construct(float a, float b, float d){
        c = a-b-d;
    }
    construct(int a ){
        c = a*a;
    }
    void display(){
        cout<<"Output is: "<<c<<endl;
    }
};
int main(){
    construct a1(30, 20);
    construct a2(12.5, 15.2, 11);
    construct a3(16);

    a1.display();
    a2.display();
    a3.display();
}
/*OUTPUT
Output is: 50
Output is: -13.7
Output is: 256
*/

/*Experiment-(ii)*/
#include<iostream>
using namespace std;
class demo{
    public:
    int a;
    demo(){
        a = 10;
    }
    demo(int x){
        a=x;
    }
    demo(demo&aa){
        a = aa.a;
    }
    void display(){
        cout<<"Display : "<<a<<endl;
    }
};
int main(){
    demo a;
    demo aa;
    demo bb(20);
    demo cc(aa);
    aa.display();
    bb.display();
    cc.display();
}

/*OUTPUT
Display : 10
Display : 20
Display : 10
*/

/*Experiment-(iii)*/

#include<iostream>
using namespace std;
int count=0;

class destruct{
    public:
    destruct()
    {
        count++;
        cout<<"Number of objects created: "<<count<<endl;
    }
    ~destruct()
    {
        count--;
        cout<<"Number of objects destroyed: "<<count<<endl;
    }
};

int main()
{
    destruct aa, bb, cc;
    {
        destruct dd;
    }
    return 0;
}

/*OUTPUT
Number of objects created: 1
Number of objects created: 2
Number of objects created: 3
Number of objects created: 4
Number of objects destroyed: 3
Number of objects destroyed: 2
Number of objects destroyed: 1
Number of objects destroyed: 0
*/