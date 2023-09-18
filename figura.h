#include <iostream>
#include <cmath>

using namespace std;

class Figure{
protected:
    double perimeter;
    double area;

public:
    void display();
    double calculatePerimeter();
    double calculateArea();
};

class Square : public Figure{
protected:
    double side;

public:
    Square(double);
    Square();
    double calculatePerimeter();
    double calculateArea();
};

class Cube : public Square{
public:
    Cube(double);
    double calculatePerimeter();
    double calculateArea();
};

class Triangle : public Figure{
protected:
    double side1;
    double side2;
    double side3;
    bool is_Triangle;

public:
    Triangle(double, double, double);
    Triangle(): side1(0), side2(0), side3(0){};
    double calculatePerimeter();
    double calculateArea();
};


class RightTriangle : public Triangle{//прямоугольный треугольник
public:
    RightTriangle(double, double);
    RightTriangle(){};
    double calculateHypotenuse();
    double calculatePerimeter();
    double calculateArea();
};


class IsoscelesTriangle : public RightTriangle{//равнобедренный треугольник
public:
    IsoscelesTriangle(double , double );
    double calculateArea();
};


class Circle : public Figure{
    double radius;

public:
    Circle(double);
    double calculateCircumference();
    double calculateArea();
};
