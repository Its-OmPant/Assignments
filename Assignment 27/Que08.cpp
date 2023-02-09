// 8. Consider a class Matrix  
// Class Matrix 
// { 
//  int a[3][3]; 
//  Public: 
//  //methods; 
// }; 
// Overload the - (Unary) should negate the numbers stored in the object. Output -
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

        void operator-(){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    a[i][j] *= -1;
                }
            }
        }
};

int main(){
    Matrix m;
    
    cout<<"Enter Matrix Element: "<<endl;
    m.inputMatrix();

    cout<<"Matrix Element are: "<<endl;
    m.print();

    -m;
    cout<<"Enter Matrix Element: "<<endl;   
    m.print();

}
