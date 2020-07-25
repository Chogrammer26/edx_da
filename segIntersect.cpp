#include <iostream>
#include <utility> 

class Point {
    public: 
    int x, y; 
};

class lineSeg {
    public: 
    Point p1, p2;
    
    void setPoints(int x1, int y1, int x2, int y2) {
        p1.x = x1; 
        p1.y = y1;
        p2.x = x2;
        p2.y = y2;
    }
}; 


bool isSegIntersect(lineSeg &l1, lineSeg&l2); 

int main()
{
    lineSeg l1; 
    lineSeg l2; 
    
    l1.setPoints(4,6,7,8);
    l2.setPoints(5,7,8,9);
    
    std::cout << "Details of Line Segment 1 : \n"
              << "End Point 1 : (" << l1.p1.x << ',' << l1.p1.y << ") "
              << "End Point 2 : (" << l1.p2.x << ',' << l1.p2.y << ")\n";
    
    std::cout << "Details of Line Segment 2 : \n"
              << "End Point 1 : (" << l2.p1.x << ',' << l2.p1.y << ") "
              << "End Point 2 : (" << l2.p2.x << ',' << l2.p2.y << ")"; 
}

bool isSegIntersect(lineSeg &l1, lineSeg&l2) 
{
}
