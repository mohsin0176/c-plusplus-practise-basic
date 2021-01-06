#include<iostream>
using namespace std;

class Circle
{         // classname
private:
   double radius;      // Data members (variables)
   string color;
public:
   double getRadius(); // Member functions
   double getArea();
};
class SoccerPlayer {   // classname
private:
   int number;         // Data members (variables)
   string name;
   int x, y;
public:
   void run();         // Member functions
   void kickBall();
};

int main()
{
    //Alternatively, you can invoke the constructor explicitly using the following syntax:
Circle c1 = Circle(1.2, "red");  // radius, color
Circle c2 = Circle(3.4);         // radius, default color
Circle c3 = Circle();            // default radius and color



    return 0;
}
