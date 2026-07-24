/*DIRECTIVE: Turtle that draws a complex spiral*/

#define CTURTLE_HEADLESS
#define CTURTLE_HEADLESS_SAVEDIR "./turtlesa.gif"
#define CTURTLE_HEADLESS_WIDTH 800
#define CTURTLE_HEADLESS_HEIGHT 600

#include <CTurtle.hpp>
namespace ct = cturtle;

int main() {
    ct::TurtleScreen scr;
    ct::Turtle turtle(scr);
    turtle.speed(ct::TS_SLOWEST);
    turtle.fillcolor({"blue"});
    turtle.begin_fill();
    for (int i = 0; i < 200; i++) {
        turtle.forward(i * 4);
        turtle.right(30);
    }
    turtle.end_fill();
    scr.bye();
    return 0;
}

