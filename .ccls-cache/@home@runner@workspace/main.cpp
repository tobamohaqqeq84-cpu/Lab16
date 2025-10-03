//toba Mohaqqeq 
//COMSC-210
//LAb-16(based on lab 14)

#include <iostream>
#include <iomanip>
using namespace std;

    class color{
      private:
        int red;
        int green;
        int blue;

      public: // this is a default constructor that sets everything to 0.
        color(){
        red =0;
        green=0;
        blue=0;
       }

    color(int r, int g, int b){  // this is a comstructor with all the 3 values
      red = r;
      green = g;
       b = blue;
       } 

    color(int b){ //this constructor is only for blue and sets the other two to 0.
      blue = b;
      green =0;
      red = 0;
    }

// these are setters (copied from lab-14)
//it lets you change the values later if needed
        void setRed(int r) {red = r;}
        void setGreen(int g) {green = g;}
        void setBlue(int b) {blue =b;}

// these are getters  (copied from lab-14)
        int getRed() const {return red;}
        int getGreen() const {return green;}
        int getBlue() const {return blue;}


//prints the functionn to show the color.
void print() const{
  cout << "Color(R:  " << setw(3) << red << ", G: " << setw(3) << green << ", B: " << setw(3) << blue << ")" << endl;

   }
};
     int main() {
       //uses the defult constructor 
        color c1;
       
        color c2 (255,0,0);
        color c3 (0,255,0);
        color c4 (0,0,255);
       
        color c5 (128); //partial constructor



       //output/ it prints them all out.
       cout << "using Constructor: " << endl;
       c1.print();
       c2.print();
       c3.print();
       c4.print();
       c5.print();


            return 0;
     }
