#include <iostream>
#include <cmath>

class swap
{
public:
        double x, y;
swap(double, double);
};
swap::swap(double xrt, double yrt){ x = yrt; y = xrt; }

int main()
{
        std::cout << "Current Values: " << '\n';
        std::cout << "X: 0.44 | Y: 0.76" << '\n';
        swap i(0.44, 0.76);
        std::cout << "X: " << i.x << " | "<< "Y: " << i.y << std::endl;
}


