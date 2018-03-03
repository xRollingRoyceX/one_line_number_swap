#include <iostream>
/*
Practicing how to write and use... and well basically just understand 
a class with member functions, and how they work, and how they are used 
and implemnted; then realized that hey, there is an easy way to do a swap.
"self-taught is more fun" - im still learning myself but C++ feels like ill be 
able to write anything when i get better at it. My favorite language!
and the inventors books are supurb. he encurages KeepItSimpleStupid
and now... so do I to myself....
*/
class swap {
public:
        double x, y;
        swap(double, double); 
};
swap::swap(double xrt, double yrt){
        x = yrt; y = xrt; 
}
/* can anyone do it easier, looked online? maybe it can be
 * written with more simplicity with some help
 * or in one real line...: 
 * swap(x, y) : x(yrt), y(xrt) {};
 */
int main()
{
        std::cout << "Current Values: " << '\n';
        
        double d = 0.44; double f = 0.76;
        std::cout << "d: [" << d << "] | " << "f: [" << f << "]\n";
        
        swap i(d, f);
        std::cout << "Swapped Values: " << '\n';
        std::cout << "d: [" << i.x << "] | "<< "f: [" << i.y << "]\n";
}
