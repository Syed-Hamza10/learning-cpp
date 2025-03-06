#include <iostream>
using namespace std;

class Point{
    public:
    int x;
    int y;

    void print_point();
};

void Point::print_point(){
   cout << "( " << this->x << ", " << y << " )" << endl;
}

class Shape{
    public:
        int num_points;
        Point *points;

        Shape(); // constructor
        void set_points(Point *p);
        float get_area();

};

Shape::Shape(){
    cout << "I am in Shape constructor right now" << endl;
    points = NULL;
    num_points = 0;
    //can't do anything bcoz we don't know what the shape is
}

float Shape::get_area(){
    //again, can't calculate area of an ambiguous shape
    return -1.0 ;
}

void Shape::set_points(Point *p){
    points = p;
}
// let's inherit this class

class Triangle : public Shape{
    // Triangle IS A Shape

    public:
        Triangle();
        
        //void set_points(Point *p);
        void show_shape();
        float get_area(); //overriding this function, bcoz every shape will have diff area formula
};

Triangle::Triangle(){
    cout << "I am in Triangle constructor right now" << endl;
    num_points = 3;
}

void Triangle::show_shape(){ //should move this to Shape as well!
    Point *temp = points;
    for (int i = 0; i < num_points; i++){
        temp->print_point();
        temp++;

    }
}

float Triangle::get_area(){
    int x0, y0, x1, y1, x2, y2;
    Point *t = points;

    x0 = t->x;      y0 = t->y;      t++;
    x1 = t->x;      y1 = t->y;      t++;
    x2 = t->x;      y2 = t->y;      

    return abs(x0 * (y1 - y2) + x1 * (y2 - y0) + x2 * (y0 - y1) / 2 );
    
}

void create_shape(){
    // Shape *s = new Shape;
    // cout << "Area of s:  " << s->get_area() << endl;

    Triangle *t = new Triangle;

    Point p1, p2, p3;
    p1.x = p1.y = 0;
    p2.x = p2.y = 15;
    p3.x = p3.y = 19;

    Point *points_of_triangle; //need this on the heap

    points_of_triangle = new Point[3];

    points_of_triangle[0] = p1;
    points_of_triangle[1] = p2;
    points_of_triangle[2] = p3;

    t->set_points(points_of_triangle);
    t->show_shape();

    cout << "Area of t:  " << t->get_area() << endl;

}

int main(){
    create_shape();
    return 0;
}