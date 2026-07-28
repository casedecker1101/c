#define CTURTLE_HEADLESS
#define CTURTLE_HEADLESS_SAVEDIR "./turtlesd.gif"
#define CTURTLE_HEADLESS_WIDTH 800
#define CTURTLE_HEADLESS_HEIGHT 600

#include <CTurtle.hpp>
namespace ct = cturtle;

int main() {
    ct::TurtleScreen screen;
    ct::Turtle turtle(screen);

    turtle.speed(ct::TS_FASTEST);
    screen.tracer(6);

    for (int i = 0; i < 3; i++) {
        turtle.right(60);
        turtle.forward(50);
    }

    screen.bye();

    return 0;
}