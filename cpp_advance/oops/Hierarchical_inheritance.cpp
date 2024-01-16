#include<iostream>
using namespace std;

class shape{
    public:
    void shape_(){
        cout<<"I am from shape class"<<endl;
    }
};

class shape2d:public shape{
    public:
    void shape2d_(){
        cout<<"I am from shape2d class"<<endl;
    }
};

class circle: public shape2d{
    public:
    void circle_(){
        cout<<"I am from circle class"<<endl;
    }
};

class rectangle: public shape2d{
    public:
    void rectangle_(){
        cout<<"I am from rectangle class"<<endl;
    }
};

class shape3d:public shape{
    public:
    void shape3d_(){
        cout<<"I am from shape3d class"<<endl;
    }
};

class cube: public shape3d{
    public:
    void cube_(){
        cout<<"I am from cube class"<<endl;
    }
};

int main(){
    circle obj1;
    //obj1.circle_();
    //obj1.shape2d_();
    //obj1.shape_();

    cube obj2;

    obj2.cube_();
    obj2.shape3d_();
    obj2.shape_();
}
