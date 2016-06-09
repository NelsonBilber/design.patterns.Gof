#include <iostream>
#include <typeinfo>
#include <vector>
#include <string>

using namespace std;

class Visitor;
class Shape;
class Circle;
class Triangle;

class Visitor
{
public:
    virtual bool intersect(const Shape&) const = 0;
    virtual bool intersect(const Circle&) const = 0;
    virtual bool intersect(const Triangle&) const = 0;
};

class Shape : public Visitor
{
public:
    virtual void getName() = 0;
};

class Circle: public Shape
{
public:
    virtual bool intersect(const Shape&) const {return true; }
    virtual bool intersect(const Circle&) const {return true;}
    virtual bool intersect(const Triangle&) const {return true;}
    virtual void getName() { cout << " Circle ... ";}
};

class Triangle: public Shape
{
public:
    virtual bool intersect(const Shape&) const {return true; }
    virtual bool intersect(const Circle&) const {return true;}
    virtual bool intersect(const Triangle&) const {return true;}
    virtual void getName() { cout << " Triangle ... ";}
};

void test(Triangle& t, Circle& c)
{
    vector<pair <Shape*, Shape*> > vs { {&t, &t}, {&t,&c}, {&c, &c}};
    
    for(auto p : vs)
    {
        if(p.first->intersect(*p.second))
        {
            (p.first)->getName();
            cout <<" intersect with";
            (p.second)->getName();
            cout << endl;
        }
    }
}

int main()
{
    Triangle t;
    Circle c;
    test(t, c);
    return 0;
}