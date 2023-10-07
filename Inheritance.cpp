/*Experiment 1*/
#include<iostream>
using namespace std;

class vehicle{
    public:
    string brand = "Pagani Huayra";
    string color = "Carbon Blue";
};

class Features: public vehicle{
    public:
    string engine = "V12";
    string mileage = "2.3 Kmpl";
};

int main(){
    Features car;
    cout<<car.color;
    cout<<endl<<car.brand<<" "<<car.engine;
}

/*OUTPUT
Carbon Blue
Pagani Huayra V12*/

/*Experiment 2*/

#include<iostream>
using namespace std;

class vehicle{
    public:
    string brand = "Pagani Huayra";
    string color = "Carbon Blue";
};

class Features{
    public:
    string engine = "V12";
    string milage = "2.3 Kmpl";
};

class display:public Features, public vehicle{
    public:
    void Display(){
        cout<< brand<<" "<<color<<" "<<milage;
    }
};

int main(){
    display car;
    car.Display();
}

/*OUTPUT
Pagani Huayra Carbon Blue 2.3 Kmpl*/