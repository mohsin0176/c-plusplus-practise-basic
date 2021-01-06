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
// Declare and construct instances c1 and c2 of the class Circle
Circle c1(1.2, "blue");
Circle c2(3.4, "green");
// Invoke member function via dot operator
cout << c1.getArea() << endl;
cout << c2.getArea() << endl;
// Reference data members via dot operator
c1.radius = 5.5;
c2.radius = 6.6;


    return 0;
}
