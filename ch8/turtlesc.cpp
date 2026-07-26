#define CTURTLE_HEADLESS
#define CTURTLE_HEADLESS_SAVEDIR "./turtlesc.gif"
#define CTURTLE_HEADLESS_WIDTH 800
#define CTURTLE_HEADLESS_HEIGHT 600

#include <CTurtle.hpp>
namespace ct = cturtle;

int main(){
    ct::TurtleScreen screen;
    screen.tracer(1, 1000);
    ct::Turtle turtle(screen);

    ct::Polygon upside_down_triangle = {
        {1, 2},   // First Point
        {-9,6}, // Second point
        {5,3}   // 
    };

    turtle.shape(upside_down_triangle);
    turtle.forward(50);

    screen.bye();
    return 0;
}