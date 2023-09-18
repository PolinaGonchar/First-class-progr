#include "figura.h"

int main(){
    Square k(4);
    Triangle tr(2,3,4);
    RightTriangle rt(2,6);
    IsoscelesTriangle it(6,10);
    Circle c(14);
    Cube cube(2);

    k.display();
    tr.display();
    rt.display();
    it.display();
    c.display();
    cube.display();
}
