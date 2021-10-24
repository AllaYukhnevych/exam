#include <iostream>

class Point;
class Segment;
class Triangle;


class Point
{
    friend Segment;
    
private:
    int x;
    int y;

public:
    Point()
    {

    }

    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

class Segment
{
    friend Triangle;

private:
       //точки
    Point pointA;
    Point pointB;
    float Length;

public:
    Segment()
    {

    }

    Segment(Point pointA, Point pointB)
    {
        pointA = this->pointA;
        pointB = this->pointB;
    }

    float length(Point &pointA, Point &pointB)
    {
        Length = sqrt(pow((pointB.x-pointA.x), 2) + pow((pointB.y-pointA.y), 2));
        Length = abs(Length);
        return Length;
    }
};

class Triangle
{

private:
    Segment LengthAB;
    Segment LengthBC;
    Segment LengthAC;
    float perim_ABC;

public:
    Triangle()
    {

    }

    Triangle(Segment& LenghtAB, Segment& LenghtBC, Segment& LenghtAC)
    {
        this->LengthAB = LenghtAB;
        this->LengthBC = LenghtBC;
        this->LengthAC = LenghtAC;
    }

    float perimetr(Segment& LenghtAB, Segment& LenghtBC, Segment& LenghtAC)
    {
        this->LengthAB = LenghtAB;
        this->LengthBC = LenghtBC;
        this->LengthAC = LenghtAC;
        perim_ABC = LenghtAB.Length+LenghtBC.Length+LenghtAC.Length;
       return perim_ABC;
    }
};


int main()
{
    int x;
    int y;
    //координати точки А
    std::cout << "Enter coordinates of point A \n" << "x = \t";
    std::cin >> x;
    std::cout << "y = \t";
    std::cin >> y;
    Point pointA(x, y);
  
    //координати точки В
    std::cout << "Enter coordinates of point B \n" << "x = \t";
    std::cin >> x;
    std::cout << "y = \t";
    std::cin >> y;
    Point pointB(x, y);

    //координати точки C
    std::cout << "Enter coordinates of point C \n" << "x = \t";
    std::cin >> x;
    std::cout << "y = \t";
    std::cin >> y;
    Point pointC(x, y);
    std::cout << "\n";

    //розрахунок відрізків
    Segment LengthAB;
    std::cout << "Segment length AB =" << LengthAB.length(pointA, pointB);
    std::cout << "\n";
    
    Segment LengthBC;
    LengthBC.length(pointB, pointC);
    
    Segment LengthAC;
    LengthAC.length(pointA, pointC);
    
    //розразхунок периметра
    std::cout << "\n";
    Triangle triagle;
    std::cout << "Perimeter of the triangle ABC = "<< triagle.perimetr(LengthAB, LengthBC, LengthAC);
    std::cout << "\n";
}