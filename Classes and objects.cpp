/*
PRN: 22070123106
Experiment_11(i)
*/

#include<iostream>
using namespace std;
class cube{
        public:
        double height,breadth,length;
};
int main(){
    cube volume;
    cout<<"Enter the height, breadth and lenght of the cube: ";
    cin>>volume.height>>volume.breadth>>volume.length;
    cout<<endl<<"The volume of the cube is: "<<volume.height*volume.breadth*volume.length;
    return 0;
}

/*OUTPUT
Enter the height, breadth and lenght of the cube: 6 8 2 
The volume of the cube is: 96
*/

/*PRN: 22070123106
Experiment_11(ii)
*/

#include<iostream>
using namespace std;
class cube{
        public:
        double height,breadth,length;
        double vol_cube(){
            cout<<"Enter the height, breadth and lenght of the cube: ";
            cin>>height>>breadth>>length;
            double volume1 = height*breadth*length;
            return volume1;
        }
        void print(int vol){
             cout<<endl<<"The volume of the cube is: "<<vol;
        }
};
int main(){
    double x;
    cube volume;
    x=volume.vol_cube();
    volume.print(x);
    return 0;
}

/*OUTPUT
Enter the height, breadth and lenght of the cube: 9 6 3
The volume of the cube is: 162
*/

/*PRN: 22070123106
Experiment_11(iii)
*/

#include<iostream>
using namespace std;
class cube{
        private:
        double height,breadth,length;
        public:
        double vol_cube(){
            cout<<"Enter the height, breadth and lenght of the cube: ";
            cin>>height>>breadth>>length;
            double volume1 = height*breadth*length;
            return volume1;
        }
        void print(int vol){
             cout<<endl<<"The volume of the cube is: "<<vol;
        }
};
int main(){
    double x;
    cube volume;
    x=volume.vol_cube();
    volume.print(x);
    return 0;
}

/*OUTPUT
Enter the height, breadth and lenght of the cube: 8 5 2
The volume of the cube is: 80
*/
