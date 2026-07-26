#define CTURTLE_HEADLESS
#define CTURTLE_HEADLESS_SAVEDIR "./turtlesb.gif"
#define CTURTLE_HEADLESS_WIDTH 800
#define CTURTLE_HEADLESS_HEIGHT 600

#include <CTurtle.hpp>
namespace ct = cturtle;

int main() {
    ct::TurtleScreen scr;
    ct::Turtle turtle(scr);
    turtle.speed(ct::TS_FAST);
    turtle.fillcolor({"blue"});
    turtle.begin_fill();
    for (int i = 0; i < 100; i++){
        turtle.back(i * 2);
        turtle.left(20);
    }
    turtle.end_fill();
    scr.bye();
    return 0;
}