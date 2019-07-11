#include <iostream>
#include <cmath>

using namespace std;
/*  a * x * x + b * x + c = 0 */
int main()
{
    int a, b, c, d;
    double x1, x2;
    
    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;
    
    if (a == 0 && b == 0){
        cout << "Equation has no roots";
        return 0;
    } else if ( b == 0 and c == 0 ){
        x1 = x2 = 0;
    } else if ( b == 0 && a != 0){
        if ( ( -c / a ) >= 0){
            x1 = sqrt( - c / a );
            x2 = -sqrt( - c / a );
        }else{
            cout << "Equation has no roots";
            return 0;
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
            return 0;
        }else if (d == 0){
            x1 = x2 = -b/ 2 * a;
        }else{
            x1 = ( -b + sqrt( d )) / 2 * a;
            x2 = ( -b - sqrt( d )) / 2 * a;
        }
    }

   if ( x1 == x2 ){
       cout << "There is only one root: x = " << x1 << endl;
   } else {
        cout << "x1 = " << x1 << " x2 = " << x2 << endl;
}
    return 0;
}
