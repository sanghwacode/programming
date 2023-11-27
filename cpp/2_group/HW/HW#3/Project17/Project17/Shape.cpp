#include <iostream>
#include "Shape.h"
Shape::Shape() { next = NULL; }
Shape* Shape::add(Shape* p) {
	this->next = p;
	return p;
}
void Shape::paint() {
	draw();
}
Shape* Shape::getNext() { return next; }

//Shape.h
#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;
class Shape {
	Shape* next;
protected:
	virtual void draw() = 0;
public:
	Shape();
	virtual ~Shape() {}
	Shape* add(Shape* p);
	void paint();
	Shape* getNext();
};

#endif