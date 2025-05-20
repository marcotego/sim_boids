#include <random>
#include <vector>

namespace project
{
    struct Position
    {
        double x;
        double y;
    };

    struct Speed
    {
        double vx;
        double vy;
    };

    struct Boids
    {
        Position X;
        Speed V;
    };

    class Rules
    {
        std::vector<Boids> b_;
        int N;

    public:
        int size() {};

        bool min_dist_x() {};

        bool min_dist_y() {};

        Speed separation() {};

        Speed alignement() {};

        Speed cohesion() {};
    };
}