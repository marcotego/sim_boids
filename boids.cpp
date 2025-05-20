#include "boids.hpp"

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
        int size() const { return b_.size(); };

        bool min_dist_x(Position b_i, Position b_j, double d)
        {
            return {fabs(b_i.x - b_j.x) < d};
        };

        bool min_dist_y(Position b_i, Position b_j, double d)
        {
            return {fabs(b_i.y - b_j.y) < d};
        };

        Speed separation(double ds, int N, double s, Position b_i, Position b_j)
        {
           double v1{};
            if (fabs(b_i.x - b_j.x) < ds && fabs(b_i.y - b_j.y) < ds)
            {
                for (int i = 0; i != size(); i++)
                {
                
                }
                
            };
            return;
        };

        Speed alignement() {};

        Speed cohesion() {};
    };
}