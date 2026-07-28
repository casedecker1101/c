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
        {0,0},      // First Point
        {-5,-5},    // Second point
        {5,-5}      // etc.
    };

    turtle.shape(upside_down_triangle);
    
    // draw a square where each edge is 50 units long
    for(int i = 0; i < 4; i++){
        // stamp at the corner of the square
        int corner_stamp = turtle.stamp();

        turtle.forward(25);
        turtle.stamp(); // stamp half-way
        turtle.right(90);
        turtle.stamp(); // another stamp
        
    }

    screen.bye();
    return 0;
}