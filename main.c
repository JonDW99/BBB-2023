#include <kipr/wombat.h>
// Left motor port - 3
// Right motor port - 0
void driveForward(float x, float y){
    y = y * 1000;
    motor(0, x);
    motor(3, x);
    msleep(y);
}

int main()
{
    driveForward(100, 2);
    return 0;
}
