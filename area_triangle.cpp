#include <iostream>
#include <utility> 
#include <cmath> 

struct Triangle {
    std::pair<int,int> v1;
    std::pair<int,int> v2;
    std::pair<int,int> v3;
};

void read_point(std::pair<int,int>&);
void read_triangle(Triangle&); 
int calc_area(const Triangle&); 

int main()
{
    Triangle t;
    read_triangle(t);
    
    std::cout << calc_area(t); 
}

void read_point(std::pair<int,int> &p)
{
    std::cin >> p.first >> p.second;
}

void read_triangle(Triangle &t)
{
    read_point(t.v1);
    read_point(t.v2);
    read_point(t.v3); 
}

int calc_area(const Triangle &t)
{
    return abs((t.v1.first * (t.v2.second - t.v3.second) + 
               t.v2.first * (t.v3.second - t.v1.second) + 
               t.v3.first * (t.v1.second - t.v2.second)) / 2);
}
