#include "figura.h"

int main(){
    vector <Square> sqr;
    while(true){
        int strona;
        cout << "Prosze podac dlugosc strony lub 0, jesli chcesz skonczyc : " << "\t";
        cin >> strona;
        if(strona == 0){
            break;
        } else {
            Square S(strona);
            sqr.push_back(S);
        }
    }

    for(auto i = 0; i < sqr.size(); ++i){
        sqr[i].display();
    }

    cout << "Rozmiar przed :" << sqr.size() << endl;

    cout << "Prosze podac numer elementu jaki chchesz usunac : " << "\t";
    int numer_usun1;
    cin >> numer_usun1;

    sqr.erase(sqr.begin() + numer_usun1 - 1);

    cout << "Rozmiar po :" << sqr.size() << endl;
    for(auto i = 0; i < sqr.size(); ++i){
        sqr[i].display();
    }




    /*Square k(4);
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
    cube.display();*/

}
