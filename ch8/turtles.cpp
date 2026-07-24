// Container-safe mode: render to a GIF instead of opening an X11 window.
#define CTURTLE_HEADLESS
#define CTURTLE_HEADLESS_SAVEDIR "./turtles.gif"
#define CTURTLE_HEADLESS_WIDTH 800
#define CTURTLE_HEADLESS_HEIGHT 600

#include <CTurtle.hpp>
namespace ct = cturtle;

int main() {
    ct::TurtleScreen scr;
    ct::Turtle turtle(scr);
    turtle.speed(ct::TS_SLOWEST);
    turtle.fillcolor({"purple"});
    turtle.begin_fill();
    for (int i = 0; i < 4; i++) {
        turtle.forward(40*80);
        turtle.right(108);
        turtle.left(72);
        turtle.back(40);
        turtle.forward(40);
        turtle.right(19);
        turtle.forward(450);
    }
    turtle.end_fill();
    scr.bye();
    return 0;
}