#include <iostream>

using namespace std;

class shape
{
    //! This is not a good method to leave the variable public. I only do it to deduce the complexity of the Program.
    //! Again do it With Proper instracted method.
    public:
        virtual float area()=0;
        virtual float peremeter() = 0;
};
class Rectangle: public shape
{
    public:
        float length;
        float breadth;
        float area(){
            return length*breadth;
        }
        float peremeter(){
            return 2*(length+breadth);
        }
};
class Cirlce : public shape
{
    public:
    float r;
    float PI = 3.14;
    float area(){
        return PI*r*r;
    }
    float peremeter(){
        return 2*PI*r;
    }
};

int main()
{ 
    float length, breadth, radius,shape;
    cout<<"Enter the shape- [Enter -> 1 or 2]\n 1. Rectangle;  2. Circle =  "<<endl;
    cin>>shape;
    if (shape == 1)
    {
        Rectangle r;
        cout<<"Enter the Length & Breadth - ";
        cin>>r.length>>r.breadth;
        // cout<<length<<" "<<breadth<<endl;
        int input;
        cout<<"What Do You Want to Calculate - \n Area(1); Peremeter(2); Both(3)"<<endl;
        cin>>input;
        if (input == 1)
        {
            cout<<"The Area of the Rectangle is  - "<< r.area()<<endl;
        }
        else if (input == 2)
        {
            /* code */
            cout<<"The Peremeter of the Rectangle is - "<<r.peremeter()<<endl;
        }
        else if (input == 3)
        {
            
            cout<<"The Area of the Rectangle is  - "<< r.area()<<endl;
            cout<<"The Peremeter of the Rectangle is - "<<r.peremeter()<<endl;
        }
        
        else{
            cout<<"Invalid Input!"<<endl;
        }
    }
    else if (shape == 2)
    {
        Cirlce c;
        cout<<"Enter the Radius of the Circle - ";
        cin>>c.r;
        // float Area = ; 
        // float Circumference = ;
        int input;
        cout<<"What Do You Want to Calculate - \n Area(1); Circumference(2); Both(3)"<<endl;
        cin>>input;
        cout<<"The Radius is "<<c.r;
        if (input == 1)
        {
            cout<<"The Area of the Circle is - "<<c.area()<<endl;
        }
        else if (input == 2)
        {
            /* code */
            cout<<"The Circumference of the Circle is - "<<c.peremeter()<<endl;
        }
        else if (input == 3)
        {
            cout<<"The Area of the Circle is - "<<c.area()<<endl;
            cout<<"The Circumference of the Circle is - "<<c.peremeter()<<endl;
        }
        else{
            cout<<"Invalid Input!"<<endl;
        }
        
        
        
        
    }else{
        cout<<"Invalid Input!"<<endl<<"Please Enter a Valid Input."<<endl;
    }
    
    


}