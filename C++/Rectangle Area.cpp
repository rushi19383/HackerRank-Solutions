#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */


class  Rectangle{
 public:
    int width,height;
  
   void read_input(){
       cin>>width>>height;
   }
   void display(){
       cout<<width<<" " << height<<"\n";
   }
    
};
class RectangleArea : public Rectangle{
    public:
    void display(){
        cout<< width*height;
    }
};
