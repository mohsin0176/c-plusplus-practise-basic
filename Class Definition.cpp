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
    return 0;
}
