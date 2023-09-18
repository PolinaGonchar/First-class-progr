#include "figura.h"

void Figure::display(){
    cout << "Perimeter: " << this->perimeter << " and area: " << this->area << endl;
}

double Figure::calculatePerimeter(){
    cout << "Class Figure: " << "\t";
    return perimeter;
}

double Figure::calculateArea(){
    cout << "Class Figure: " << "\t";
    return area;
}







Square::Square(double side){
    this->side = side;
    this->perimeter = calculatePerimeter();
    this->area = calculateArea();
}

double Square::calculatePerimeter(){
    cout << "Class Square calculating perimeter: " << endl;
    double p = this->side * 4;
    return p;
}

double Square::calculateArea(){
    cout << "Class Square calculating area: " << endl;
    double a = this->side * this->side;
    return a;
}

Square::Square(){
    cout << "Default constructor for Square" << endl;
}








Cube::Cube(double edge){
    this->side = edge;
    this->perimeter = calculatePerimeter();
    this->area = calculateArea();
}

double Cube::calculatePerimeter(){
    return Square::calculatePerimeter() * 3;
}

double Cube::calculateArea(){
    return Square::calculateArea() * 6;
}










Triangle::Triangle(double sideA, double sideB, double sideC){
    this->side1 = sideA;
    this->side2 = sideB;
    this->side3 = sideC;
    if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1){
        is_Triangle = true;
    }else is_Triangle = false;
    this->perimeter = calculatePerimeter();
    this->area = calculateArea();
}

double Triangle::calculatePerimeter(){
    double p = this->side1 + this->side2 + this->side3;
    return p;
}

double Triangle::calculateArea(){
    double a;
    if (is_Triangle){
        a = sqrt(this->perimeter/2 * (this->perimeter/2 - this->side1) * (this->perimeter/2 - this->side2) * (this->perimeter/2 - this->side3));
    } else {
        a = 0;
        cout << "Impossible to calculate area. It is not a triangle." << endl;
    }
    return a;
}






RightTriangle::RightTriangle(double rt,double rt2){
    this->side1 = rt;
    this->side2 = rt2;
    this->side3 = calculateHypotenuse();
    this->perimeter = calculatePerimeter();
    this->area = calculateArea();
}

double RightTriangle::calculateHypotenuse(){
    double hyp = sqrt((side1 * side1) + (side2 * side2));
    return hyp;
}

double RightTriangle::calculatePerimeter(){
        return side1 + side2 + side3;
}

double RightTriangle::calculateArea(){
    return 0.5 * side1 * side2;
}






IsoscelesTriangle::IsoscelesTriangle(double base, double equalSide){
    this->side1 = base;
    this->side2 = equalSide;
    this->side3 = this->side2;
    this->perimeter = calculatePerimeter();
    this->area = calculateArea();
}


double IsoscelesTriangle::calculateArea(){
        double height = sqrt(pow(side2, 2) - pow(side1 / 2, 2));
        return 0.5 * side1 * height;
}


Circle::Circle(double radius){
    this->radius = radius;
    this->perimeter = calculateCircumference();
    this->area = calculateArea();
}

double Circle::calculateCircumference(){
    double c = 2 * M_PI * this->radius;
    return c;
}

double Circle::calculateArea(){
    double a = M_PI * pow(this->radius, 2);
    return a;
}


//Dla trojkata z roznymi stronami zmodyfikowac
//Didz trojk z rawnostoronnij i priamougolnyj
//Normalno nazwat dla github