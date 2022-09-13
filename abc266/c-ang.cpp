#include<iostream>
#include<vector>
#include<numeric>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
    double Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    cin >> Ax >> Ay;
    cin >> Bx >> By;
    cin >> Cx >> Cy;
    cin >> Dx >> Dy;

    double dx1, dy1;
    dx1 = Dx - Ax; dy1 = Dy - Ay;

    double dx2, dy2;
    dx2 = Bx - Ax; dy2 = By - Ay;
    int angDAB = std::atan2(dy1 - dy2, dx1 - dx2) * 180 / M_PI;

    dx1 = Ax - Bx; dy1 = Ay - By;
    dx2 = Cx - Bx; dy2 = Cy - By;
    int angABC = std::atan2(dy1 - dy2, dx1 - dx2) * 180 / M_PI;

    dx1 = Bx - Cx; dy1 = By - Cy;
    dx2 = Dx - Cx; dy2 = Dy - Cy;
    int angBCD = std::atan2(dy1 - dy2, dx1 - dx2) * 180 / M_PI;

    dx1 = Cx - Dx; dy1 = Cy - Dy;
    dx2 = Ax - Dx; dy2 = Ay - Dy;
    int angCDA = std::atan2(dy1 - dy2, dx1 - dx2) * 180 / M_PI;

    int allAng = angDAB + angABC + angBCD + angCDA;

    if (allAng == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}