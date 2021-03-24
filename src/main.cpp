#include <iostream>
#include "microMouse.h"
//#include "microMouse.cpp"

using namespace std;

int main(){
    double a = 2.1;
    MicroMouse *ms = new MicroMouse(a);
    cout << ms->get_dimension_x();
    return 0;
}