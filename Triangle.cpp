// Example Project
// Author: Jake Lane
// Student ID: a1686679
// Description: Triangle class

#include "Triangle.hpp"

// Constructor for Triangle
Triangle::Triangle(int height, int width): Polygon(height, width) {}

int x; 
cout << "Type a number: "; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value
// Destructor
Triangle::~Triangle() {}

// Returns the area of the triangle
float Triangle::area() {
	return m_height * m_width / 2.000;
}
