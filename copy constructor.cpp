#include<iostream>
using namespace std;

Class Circle
{
private:
    double radius;
    string color;
public:
    Circle(double r,string col)
    {
        this->r=radius;
        this->col=color;
    }
    ~Circle()
    {

    }
}

int main()
{
Circle c6(5.6, "orange"), c7;
cout << "Radius=" << c6.getRadius() << " Area=" << c6.getArea()
     << " Color=" << c6.getColor() << endl;
                // Radius=5.6 Area=98.5206 Color=orange
cout << "Radius=" << c7.getRadius() << " Area=" << c7.getArea()
     << " Color=" << c7.getColor() << endl;
                // Radius=1 Area=3.1416 Color=red (default constructor)

c7 = c6; // memberwise copy assignment
cout << "Radius=" << c7.getRadius() << " Area=" << c7.getArea()
     << " Color=" << c7.getColor() << endl;
                // Radius=5.6 Area=98.5206 Color=orange
return 0;
}
