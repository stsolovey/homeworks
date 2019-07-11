#include <iostream>
#include <cmath>

using namespace std;
/*  a * x * x + b * x + c = 0 */
void sqrtequation(int a, int b, int c);
int main()
{
    sqrtequation(-1, -2, 15);
    sqrtequation(0, -2, 15);
    sqrtequation(-1, 0, 15);
    sqrtequation(0, 0, 15);
    sqrtequation(0, -2, 0);
    sqrtequation(-1, 0, 0);
    return 0;
}

void sqrtequation(int a, int b, int c){
    cout << endl << "a = " << a << " b = " << b << " c = " << c << endl;
    int d;
    double x1, x2;
    if (a == 0 && b == 0){
        cout << "Equation has no roots";
        return;
    } else if ( b == 0 and c == 0 ){
        x1 = x2 = 0;
    } else if ( b == 0 && a != 0){
        if ( ( -c / a ) >= 0){
            x1 = sqrt( - c / a );
            x2 = -sqrt( - c / a );
        }else{
            cout << "Equation has no roots";
            return;
        }
    } else if ( a == 0 && b != 0) {
        x1 = x2 = - c / b;
    } else if ( c == 0 ) {
        x1 = 0;
        x2 = - b / a;
    } else {

    d = b * b - 4 * a * c;
    cout << "D = " << d << endl;
        if(d < 0){
            cout << "There is no roots" << endl;
            return;
        }else if (d == 0){
            x1 = x2 = -b/ 2 * a;
        }else{
    x1 = ( -b + sqrt( d )) / 2 * a;
    x2 = ( -b - sqrt( d )) / 2 * a;
        }
    }
    if ( x1 == x2 ){
       cout << "There is one root only x = " << x1 << endl;
    } else {
        cout << "x1 = " << x1 << " x2 = " << x2 << endl;
    }
}
