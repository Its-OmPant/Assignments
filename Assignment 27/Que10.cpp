// 10. Class Matrix 
// { 
//  int a[3][3]; 
//  Public: 
//  //methods; 
// }; 
// Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator overloading). Output -
// image.png

#include<iostream>
using namespace std;

class Matrix{
    int a[3][3];
    public:
        void inputMatrix(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cin>>a[i][j];
                }
            }
        }

        void print(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<a[i][j]<<"  ";
                }
                cout<<endl;
            }
        }

        Matrix operator+(Matrix m){
            Matrix temp;

            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    temp.a[i][j] = a[i][j] + m.a[i][j];
                }
            }

            return temp;
        }
};

int main(){
    Matrix m1,m2,m3;
    
    cout<<"Enter 1st Matrix Elements: "<<endl;
    m1.inputMatrix();

    cout<<"Enter 2nd Matrix Elements: "<<endl;
    m2.inputMatrix();

    cout<<"Matrix 1  Elements are: "<<endl;
    m1.print();
    cout<<"Matrix 2  Elements are: "<<endl;
    m2.print();

    
    cout<<"Addition of matrices : "<<endl;
    m3 = m1 + m2;

    m3.print();
    return 0;

}