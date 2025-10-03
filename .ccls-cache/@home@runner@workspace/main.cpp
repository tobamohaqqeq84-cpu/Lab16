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

      public:
        color(){
        red =0;
        green=0;
        blue=0;
       }

    color(int r, int g, int b){
      red = r;
      green = g;
       b = blue;
       } 

    color(int b){
      blue = b;
      green =0;
      red = 0;
    }


void print() const{
  cout << "Color(R:  " << setw(3) << red << ", G: " << setw(3) << green << ", B: " << setw(3) << blue << ")" << endl;

}
};
     int main() {
       color c1, c2, c3;

       c1.setRed(255); c1.setGreen(0); c1.setBlue(0); //red
       c2.setRed(0); c2.setGreen(255); c2.setBlue(0); //green
       c3.setRed(0); c3.setGreen(0); c3.setBlue(255); //blue


       //output
       c1.print();
       c2.print();
       c3.print();


            return 0;
     }
