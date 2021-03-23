#include "microMouse.h"
#include <iostream>
#include <cstdlib>

using namespace std;

double MicroMouse::get_dimension_x() {
        	return this->dimension_x;
}
void MicroMouse::set_dimension_x(double dimension_x) {
	this->dimension_x = dimension_x;
}
double MicroMouse::get_dimension_y() {
	return this->dimension_y;
}
void MicroMouse::set_dimension_y(double dimension_y) {
	this->dimension_y = dimension_y;
}
double MicroMouse::get_motor_speed() {
	return this->motor_speed;
}
void MicroMouse::set_motor_speed(double motor_speed) {
	this->motor_speed = motor_speed;
}
double MicroMouse::get_rotation_speed() {
	return this->rotation_speed;
}
void MicroMouse::set_rotation_speed(double rotation_speed) {
this->rotation_speed = rotation_speed;
}

// Constructor
MicroMouse::MicroMouse(double dimension_x){
    this->dimension_x = dimension_x;
}

