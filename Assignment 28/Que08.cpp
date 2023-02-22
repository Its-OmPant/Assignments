// 8. Create a Coordinate class for 3 variables x,y and z and overload comma operator such  that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are  objects of 3D coordinate class. 

#include<iostream>
using namespace std;

class Coordinate{
    int x,y,z;
    public:
        Coordinate(){}

        Coordinate(int x, int y, int z){
            this->x = x;
            this->y = y;
            this->z = z;
        }

        void display(){
            cout<<"Coordinates: "<<x<<"x "<<y<<"y "<<z<<"z "<<endl;
        }

        Coordinate operator,(Coordinate c){
            return c;
        }
};

int main(){
    Coordinate c1 = Coordinate(1,2,3);
    Coordinate c2 = Coordinate(4,5,6);
    Coordinate c3;

    c1.display();
    c2.display();

    c3 = (c1,c2);
    c3.display();
    
    return 0;
}