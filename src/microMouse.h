#ifndef MICRO_MOUSE
#define MICRO_MOUSE
 
class MicroMouse {
    private:
        double dimension_x;
        double dimension_y;
        double motor_speed;
        double rotation_speed;      

    public:
    // Getters and setters
        double get_dimension_x();
        void set_dimension_x(double dimension_x);
        double get_dimension_y();
        void set_dimension_y(double dimension_y);
        void set_motor_speed(double motor_speed);
        double get_motor_speed();
        double get_rotation_speed();
        void set_rotation_speed(double rotation_speed);

        // TODO
        void scan_surroundings();
        void go_to_exit();

        MicroMouse(double dimension_x);

        ~MicroMouse();


};
 
#endif