// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" // Header yang dibuat oleh programmer
#include <glut.h> // Header yang tidak dibuat oleh programmer
#include <math.h>

typedef struct point2D_i
{
	int x;
	int y;
};

typedef struct point2D_f {
	float x;
	float y;
};

typedef struct point2D_d {
	double x;
	double y;
};

typedef struct vector2D_i
{
	int v[3];
};

typedef struct vector2D_f
{
	float v[3];
};

typedef struct vector2D_d
{
	double v[3];
};

typedef struct matrix2D_i
{
	int m[3][3];
};

typedef struct matrix2D_f
{
	float m[3][3];
};

typedef struct matrix2D_d
{
	double m[3][3];
};

typedef struct colorRGB_i {
	int r;
	int g;
	int b;
};

typedef struct colorRGB_f {
	float r;
	float g;
	float b;
};

typedef struct colorRGB_d {
	double r;
	double g;
	double b;
};

typedef struct colorARGB_i {
	int a;
	int r;
	int g;
	int b;
};

typedef struct colorARGB_f {
	float a;
	float r;
	float g;
	float b;
};

typedef struct colorARGB_d {
	double a;
	double r;
	double g;
	double b;
};

vector2D_i point2D_i_to_vector2D_i(point2D_i point) {
	vector2D_i vector;

	vector.v[0] = point.x;
	vector.v[1] = point.y;
	vector.v[2] = 1;

	return vector;
}

vector2D_f point2D_f_to_vector2D_f(point2D_f point) {
	vector2D_f vector;

	vector.v[0] = point.x;
	vector.v[1] = point.y;
	vector.v[2] = 1;

	return vector;
}

vector2D_d point2D_d_to_vector2D_d(point2D_d point) {
	vector2D_d vector;

	vector.v[0] = point.x;
	vector.v[1] = point.y;
	vector.v[2] = 1;

	return vector;
}

point2D_i vector2D_i_to_point2D_i(vector2D_i vector) {
	point2D_i point;

	point.x = vector.v[0];
	point.y = vector.v[1];

	return point;
}

point2D_f vector2D_f_to_point2D_f(vector2D_f vector) {
	point2D_f point;

	point.x = vector.v[0];
	point.y = vector.v[1];

	return point;
}

point2D_d vector2D_d_to_point2D_d(vector2D_d vector) {
	point2D_d point;

	point.x = vector.v[0];
	point.y = vector.v[1];

	return point;
}

void drawPoint(point2D_i point) {
	glBegin(GL_POINTS);
		glVertex2i(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_i point, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_POINTS);
		glVertex2i(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_i point, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_POINTS);
		glVertex2i(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_i point, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_POINTS);
		glVertex2i(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_i point, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_POINTS);
		glVertex2i(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_i point, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_POINTS);
		glVertex2i(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_i point, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_POINTS);
		glVertex2i(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_f point) {
	glBegin(GL_POINTS);
		glVertex2f(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_f point, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_POINTS);
		glVertex2f(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_f point, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_POINTS);
		glVertex2f(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_f point, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_POINTS);
		glVertex2f(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_f point, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_POINTS);
		glVertex2f(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_f point, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_POINTS);
		glVertex2f(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_f point, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_POINTS);
		glVertex2f(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_d point) {
	glBegin(GL_POINTS);
		glVertex2d(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_d point, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_POINTS);
		glVertex2d(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_d point, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_POINTS);
		glVertex2d(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_d point, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_POINTS);
		glVertex2d(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_d point, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_POINTS);
		glVertex2d(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_d point, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_POINTS);
		glVertex2d(point.x, point.y);
	glEnd();
}

void drawPoint(point2D_d point, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_POINTS);
		glVertex2d(point.x, point.y);
	glEnd();
}

void drawLine(point2D_i point1, point2D_i point2) {
	glBegin(GL_LINES);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_i point1, point2D_i point2, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_LINES);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_i point1, point2D_i point2, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_LINES);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_i point1, point2D_i point2, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_LINES);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_i point1, point2D_i point2, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_LINES);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_i point1, point2D_i point2, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_LINES);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_i point1, point2D_i point2, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_LINES);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_f point1, point2D_f point2) {
	glBegin(GL_LINES);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_f point1, point2D_f point2, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_LINES);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_f point1, point2D_f point2, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_LINES);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_f point1, point2D_f point2, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_LINES);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_f point1, point2D_f point2, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_LINES);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_f point1, point2D_f point2, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_LINES);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_f point1, point2D_f point2, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_LINES);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_d point1, point2D_d point2) {
	glBegin(GL_LINES);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_d point1, point2D_d point2, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_LINES);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_d point1, point2D_d point2, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_LINES);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_d point1, point2D_d point2, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_LINES);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_d point1, point2D_d point2, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_LINES);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_d point1, point2D_d point2, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_LINES);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
	glEnd();
}

void drawLine(point2D_d point1, point2D_d point2, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_LINES);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
	glEnd();
}

void drawCoordinateLines() {
	point2D_i point = { 0, 0 };

	drawLine(point, { 0, 360 });
	drawLine(point, { 360, 0 });
	drawLine(point, { 0, -360 });
	drawLine(point, { -360, 0 });
}

void drawCoordinateLines(colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	drawCoordinateLines();
}

void drawCoordinateLines(colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	drawCoordinateLines();
}

void drawCoordinateLines(colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	drawCoordinateLines();
}

void drawCoordinateLines(colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	drawCoordinateLines();
}

void drawCoordinateLines(colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	drawCoordinateLines();
}

void drawCoordinateLines(colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	drawCoordinateLines();
}

void drawCoordinateLines(colorRGB_i color1, colorRGB_i color2) {
	point2D_i point = { 0, 0 };
	
	glColor3i(color1.r, color1.g, color1.b);
	drawLine(point, { 360, 0 });
	drawLine(point, { -360, 0 });

	glColor3i(color2.r, color2.g, color2.b);
	drawLine(point, { 0, 360 });
	drawLine(point, { 0, -360 });
}

void drawCoordinateLines(colorRGB_f color1, colorRGB_f color2) {
	point2D_i point = { 0, 0 };

	glColor3f(color1.r, color1.g, color1.b);
	drawLine(point, { 360, 0 });
	drawLine(point, { -360, 0 });

	glColor3f(color2.r, color2.g, color2.b);
	drawLine(point, { 0, 360 });
	drawLine(point, { 0, -360 });
}

void drawCoordinateLines(colorRGB_d color1, colorRGB_d color2) {
	point2D_i point = { 0, 0 };

	glColor3d(color1.r, color1.g, color1.b);
	drawLine(point, { 360, 0 });
	drawLine(point, { -360, 0 });

	glColor3d(color2.r, color2.g, color2.b);
	drawLine(point, { 0, 360 });
	drawLine(point, { 0, -360 });
}

void drawCoordinateLines(colorARGB_i color1, colorARGB_i color2) {
	point2D_i point = { 0, 0 };

	glColor4i(color1.r, color1.g, color1.b, color1.a);
	drawLine(point, { 360, 0 });
	drawLine(point, { -360, 0 });

	glColor4i(color2.r, color2.g, color2.b, color2.a);
	drawLine(point, { 0, 360 });
	drawLine(point, { 0, -360 });
}

void drawCoordinateLines(colorARGB_f color1, colorARGB_f color2) {
	point2D_i point = { 0, 0 };

	glColor4f(color1.r, color1.g, color1.b, color1.a);
	drawLine(point, { 360, 0 });
	drawLine(point, { -360, 0 });

	glColor4f(color2.r, color2.g, color2.b, color2.a);
	drawLine(point, { 0, 360 });
	drawLine(point, { 0, -360 });
}

void drawCoordinateLines(colorARGB_d color1, colorARGB_d color2) {
	point2D_i point = { 0, 0 };

	glColor4d(color1.r, color1.g, color1.b, color1.a);
	drawLine(point, { 360, 0 });
	drawLine(point, { -360, 0 });

	glColor4d(color2.r, color2.g, color2.b, color2.a);
	drawLine(point, { 0, 360 });
	drawLine(point, { 0, -360 });
}

void drawTriangle(point2D_i point1, point2D_i point2, point2D_i point3) {
	glBegin(GL_LINE_LOOP);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_i point1, point2D_i point2, point2D_i point3, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_i point1, point2D_i point2, point2D_i point3, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_i point1, point2D_i point2, point2D_i point3, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_i point1, point2D_i point2, point2D_i point3, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_i point1, point2D_i point2, point2D_i point3, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_i point1, point2D_i point2, point2D_i point3, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_f point1, point2D_f point2, point2D_f point3) {
	glBegin(GL_LINE_LOOP);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_f point1, point2D_f point2, point2D_f point3, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_f point1, point2D_f point2, point2D_f point3, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_f point1, point2D_f point2, point2D_f point3, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_f point1, point2D_f point2, point2D_f point3, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_f point1, point2D_f point2, point2D_f point3, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_f point1, point2D_f point2, point2D_f point3, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_d point1, point2D_d point2, point2D_d point3) {
	glBegin(GL_LINE_LOOP);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_d point1, point2D_d point2, point2D_d point3, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_d point1, point2D_d point2, point2D_d point3, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_d point1, point2D_d point2, point2D_d point3, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_d point1, point2D_d point2, point2D_d point3, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_d point1, point2D_d point2, point2D_d point3, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
	glEnd();
}

void drawTriangle(point2D_d point1, point2D_d point2, point2D_d point3, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2) {
	glBegin(GL_LINE_LOOP);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2) {
	glBegin(GL_LINE_LOOP);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2) {
	glBegin(GL_LINE_LOOP);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point1.x, point2.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, point2D_i point3, point2D_i point4) {
	glBegin(GL_LINE_LOOP);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
		glVertex2i(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, point2D_i point3, point2D_i point4, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
		glVertex2i(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, point2D_i point3, point2D_i point4, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
		glVertex2i(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, point2D_i point3, point2D_i point4, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
		glVertex2i(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, point2D_i point3, point2D_i point4, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
		glVertex2i(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, point2D_i point3, point2D_i point4, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
		glVertex2i(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_i point1, point2D_i point2, point2D_i point3, point2D_i point4, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
		glVertex2i(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, point2D_f point3, point2D_f point4) {
	glBegin(GL_LINE_LOOP);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
		glVertex2f(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, point2D_f point3, point2D_f point4, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
		glVertex2f(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, point2D_f point3, point2D_f point4, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
		glVertex2f(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, point2D_f point3, point2D_f point4, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
		glVertex2f(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, point2D_f point3, point2D_f point4, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
		glVertex2f(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, point2D_f point3, point2D_f point4, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
		glVertex2f(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_f point1, point2D_f point2, point2D_f point3, point2D_f point4, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2f(point1.x, point1.y);
		glVertex2f(point2.x, point2.y);
		glVertex2f(point3.x, point3.y);
		glVertex2f(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, point2D_d point3, point2D_d point4) {
	glBegin(GL_LINE_LOOP);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
		glVertex2d(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, point2D_d point3, point2D_d point4, colorRGB_i color) {
	glColor3i(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
		glVertex2d(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, point2D_d point3, point2D_d point4, colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
		glVertex2d(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, point2D_d point3, point2D_d point4, colorRGB_d color) {
	glColor3d(color.r, color.g, color.b);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
		glVertex2d(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, point2D_d point3, point2D_d point4, colorARGB_i color) {
	glColor4i(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
		glVertex2d(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, point2D_d point3, point2D_d point4, colorARGB_f color) {
	glColor4f(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
		glVertex2d(point4.x, point4.y);
	glEnd();
}

void drawRectangle(point2D_d point1, point2D_d point2, point2D_d point3, point2D_d point4, colorARGB_d color) {
	glColor4d(color.r, color.g, color.b, color.a);

	glBegin(GL_POLYGON);
		glVertex2d(point1.x, point1.y);
		glVertex2d(point2.x, point2.y);
		glVertex2d(point3.x, point3.y);
		glVertex2d(point4.x, point4.y);
	glEnd();
}

void draw5PointsStar(point2D_d point1, point2D_d point2, point2D_d point3, point2D_d point4, point2D_d point5) {
	glBegin(GL_LINE_LOOP);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
		glVertex2i(point4.x, point4.y);
		glVertex2i(point5.x, point5.y);
	glEnd();
}

void draw5PointsStar_2(point2D_d point1, point2D_d point2, point2D_d point3, point2D_d point4, point2D_d point5) {
	glBegin(GL_POLYGON);
		glVertex2i(point1.x, point1.y);
		glVertex2i(point2.x, point2.y);
		glVertex2i(point3.x, point3.y);
		glVertex2i(point4.x, point4.y);
		glVertex2i(point5.x, point5.y);
	glEnd();
}

void drawPolyline(point2D_f point[], int n) {
	int i;

	glBegin(GL_LINE_STRIP);
		for (i = 0; i < n; i++)
			glVertex2f(point[i].x, point[i].y);
	glEnd();
}

void drawPolygon(point2D_f point[], int n) {
	int i;

	glBegin(GL_LINE_LOOP);
		for (i = 0; i < n; i++)
			glVertex2f(point[i].x, point[i].y);
	glEnd();
}

void drawFillPolygon(point2D_f point[], int n, colorRGB_f color) {
	int i;

	glColor3f(color.r, color.g, color.b);
	glBegin(GL_POLYGON);
		for (i = 0; i < n; i++)
			glVertex2f(point[i].x, point[i].y);
	glEnd();
}

void drawGradatePolygon(point2D_f point[], int n, colorRGB_f color) {
	int i;

	glBegin(GL_POLYGON);
		for (i = 0; i < n; i++) {
			glColor3f(color.r, color.g, color.b);
			glVertex2f(point[i].x, point[i].y);
		}
	glEnd();
}

void drawRose(int n) {
	point2D_f shape[360];
	double srad, r;

	for (int s = 0; s < 360; s++)
	{
		srad = (s * 3.14) / 180;
		r = sin(n * srad);

		shape[s].x = 100 * (r * cos(srad));
		shape[s].y = 100 * (r * sin(srad));
	}

	drawPolygon(shape, 360);
}

void drawRose(int n, colorRGB_f color) {
	point2D_f shape[360];
	double srad, r;

	glColor3f(color.r, color.g, color.b);

	for (int s = 0; s < 360; s++)
	{
		srad = (s * 3.14) / 180;
		r = sin(n * srad);

		shape[s].x = 100 * (r * cos(srad));
		shape[s].y = 100 * (r * sin(srad));
	}

	drawFillPolygon(shape, 360, color);
}

void drawSin() {
	point2D_f p[360];

	for (int i = 0; i < 360; i++) {
		p[i].x = i;
		p[i].y = 100 * sin(i / 57.3);
	}

	drawPolyline(p, 360);
}

void drawSinMoveWithPoint() {
	static int go = 0;
	point2D_f p[360];

	for (int i = 0; i < 360; i++) {
		p[i].x = i;
		p[i].y = 100 * sin((i + go) / 57.3);
	}

	drawPolyline(p, 360);

	glPointSize(10);
	drawPoint(p[go]);

	go++;

	if (go == 360)
		go = 0;
}

void drawSin_colorf(colorRGB_f color) {
	glColor3f(color.r, color.g, color.b);
	drawSin();
}

void drawCircleAtPoint(point2D_f point, int r, int n) {
	point2D_f p[360];
	float a = 6.28 / n;

	for (int i = 0; i < n; i++) {
		p[i].x = point.x + r * cos((float) i * a);
		p[i].y = point.y + r * sin((float) i * a);
	}

	drawPolygon(p, n);
}

void drawCircleAtPoint(point2D_f point, int r, int n, colorRGB_f color) {
	point2D_f p[360];
	float a = 6.28 / n;

	for (int i = 0; i < n; i++) {
		p[i].x = point.x + r * cos((float)i * a);
		p[i].y = point.y + r * sin((float)i * a);
	}

	drawFillPolygon(p, n, color);
}

void drawCircleAtPoint(point2D_f *p, point2D_f point, int r, int n) {
	float a = 6.28 / n;

	for (int i = 0; i < n; i++) {
		p[i].x = point.x + r * cos((float)i * a);
		p[i].y = point.y + r * sin((float)i * a);
	}

	drawPolygon(p, n);
}

void drawCircleAtPoint(point2D_f *p, point2D_f point, int r, int n, colorRGB_f color) {
	float a = 6.28 / n;

	for (int i = 0; i < n; i++) {
		p[i].x = point.x + r * cos((float)i * a);
		p[i].y = point.y + r * sin((float)i * a);
	}

	drawFillPolygon(p, n, color);
}

void drawWatch(point2D_f point, int r, int n) {
	static int go = n / 4;
	point2D_f p[360];
	
	drawCircleAtPoint(p, point, r, n);

	if (go < 0)
		go = n - 1;

	drawLine(point, p[go]);

	go--;
}

void drawCircle(int r, int n) {
	drawCircleAtPoint({ 0, 0 }, r, n);
}

void drawCircle(int r, int n, colorRGB_f color) {
	drawCircleAtPoint({ 0, 0 }, r, n, color);
}

void drawEclipseAtPoint(point2D_f point, int r1, int r2, int n) {
	point2D_f p[360];
	float a = 6.28 / n;

	for (int i = 0; i < n; i++) {
		p[i].x = point.x + r1 * cos((float)i * a);
		p[i].y = point.y + r2 * sin((float)i * a);
	}

	drawPolygon(p, n);
}

void drawEclipse(int r1, int r2, int n) {
	drawEclipseAtPoint({ 0, 0 }, r1, r2, n);
}

matrix2D_i createIntIdentity() {
	matrix2D_i mI;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mI.m[i][j] = 0;
		}

		mI.m[i][i] = 1;
	}

	return mI;
}

matrix2D_f createFloatIdentity() {
	matrix2D_f mF;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mF.m[i][j] = 0;
		}

		mF.m[i][i] = 1;
	}

	return mF;
}

matrix2D_d createDoubleIdentity() {
	matrix2D_d mD;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mD.m[i][j] = 0;
		}

		mD.m[i][i] = 1;
	}

	return mD;
}

matrix2D_i translationMatrix(int dx, int dy) {
	matrix2D_i mI = createIntIdentity();

	mI.m[0][2] = dx;
	mI.m[1][2] = dy;

	return mI;
}

matrix2D_f translationMatrix(float dx, float dy) {
	matrix2D_f mF = createFloatIdentity();

	mF.m[0][2] = dx;
	mF.m[1][2] = dy;

	return mF;
}

matrix2D_d translationMatrix(double dx, double dy) {
	matrix2D_d mD = createDoubleIdentity();

	mD.m[0][2] = dx;
	mD.m[1][2] = dy;

	return mD;
}

matrix2D_i scalingMatrix(int dx, int dy) {
	matrix2D_i mI = createIntIdentity();

	mI.m[0][0] = dx;
	mI.m[1][1] = dy;

	return mI;
}

matrix2D_f scalingMatrix(float dx, float dy) {
	matrix2D_f mF = createFloatIdentity();

	mF.m[0][0] = dx;
	mF.m[1][1] = dy;

	return mF;
}

matrix2D_d scalingMatrix(double dx, double dy) {
	matrix2D_d mD = createDoubleIdentity();

	mD.m[0][0] = dx;
	mD.m[1][1] = dy;

	return mD;
}

matrix2D_f rotationMatrix(float tetha) {
	matrix2D_f mF = createFloatIdentity();

	float cs = cos(tetha);
	float sn = sin(tetha);

	mF.m[0][0] = cs;
	mF.m[1][0] = sn;
	mF.m[0][1] = -sn;
	mF.m[1][1] = cs;

	return mF;
}

matrix2D_d rotationMatrix(double tetha) {
	matrix2D_d mD = createDoubleIdentity();

	double cs = cos(tetha);
	double sn = sin(tetha);

	mD.m[0][0] = cs;
	mD.m[1][0] = sn;
	mD.m[0][1] = -sn;
	mD.m[1][1] = cs;

	return mD;
}

matrix2D_i matrixXmatrix(matrix2D_i m1, matrix2D_i m2) {
	matrix2D_i mX;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mX.m[i][j] = 0;

			for (int k = 0; k < 3; k++) {
				mX.m[i][j] += m1.m[i][k] * m2.m[k][j];
			}
		}
	}

	return mX;
}

matrix2D_f matrixXmatrix(matrix2D_f m1, matrix2D_f m2) {
	matrix2D_f mX;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mX.m[i][j] = 0;

			for (int k = 0; k < 3; k++) {
				mX.m[i][j] += m1.m[i][k] * m2.m[k][j];
			}
		}
	}

	return mX;
}

matrix2D_d matrixXmatrix(matrix2D_d m1, matrix2D_d m2) {
	matrix2D_d mX;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mX.m[i][j] = 0;

			for (int k = 0; k < 3; k++) {
				mX.m[i][j] += m1.m[i][k] * m2.m[k][j];
			}
		}
	}

	return mX;
}

vector2D_i matrixXvector(matrix2D_i m, vector2D_i v) {
	vector2D_i vX;

	for (int i = 0; i < 3; i++) {
		vX.v[i] = 0;

		for (int j = 0; j < 3; j++) {
			vX.v[i] += m.m[i][j] * v.v[j];
		}
	}

	return vX;
}

vector2D_f matrixXvector(matrix2D_f m, vector2D_f v) {
	vector2D_f vX;

	for (int i = 0; i < 3; i++) {
		vX.v[i] = 0;

		for (int j = 0; j < 3; j++) {
			vX.v[i] += m.m[i][j] * v.v[j];
		}
	}

	return vX;
}

vector2D_d matrixXvector(matrix2D_d m, vector2D_d v) {
	vector2D_d vX;

	for (int i = 0; i < 3; i++) {
		vX.v[i] = 0;

		for (int j = 0; j < 3; j++) {
			vX.v[i] += m.m[i][j] * v.v[j];
		}
	}

	return vX;
}

void draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 0, 0); // Set color of draw


	//drawCoordinateLines_2color2f({ 0, 0, 0 }, { 0, 0, 0 });
	//drawTrianglei_colorf({ -100, 100 }, { -200, 100 }, { -150, 200 }, { 0, 0, 1 });
	//draw5PointsStari({ 100, 100 }, { 150, 200 }, { 200, 100 }, { 75, 160 }, { 225, 160 });
	//drawRectanglei_colorf({ -100, -100 }, { -200, -200 }, { 1, 0, 1 });
	//drawRectangle2i_colorf({ 30, -30 }, { 200, -30 }, { 200, -300 }, { 30, -300 }, { 0, 1, 1 });

	//point2D_i kotak[4] = {{ 100, 100 }, { 300, 100 }, { 300, 200 }, { 100, 200 }};
	//drawPolygon(kotak, 4);

	//point2D_i bintang[10] = {{ 80, 146 }, { 99, 90 }, { 157, 90 }, { 110, 55 }, { 128, 1 }, { 80, 34 }, { 32, 1 }, { 54, 55 }, { 3, 90 }, { 63, 90 }};
	//drawPolygon(bintang, 10);

	//drawRose_colorf(1000, { 1, 0, 0 });
	//drawRose_colorf(100, { 0, 0, 1 });
	//drawRose_colorf(11, { 1, 0, 1 });

	//drawSin();
	//drawCircle(100, 100);

	//drawWatch({ 0, 0 }, 150, 360);
	//drawSinMoveWithPoint();

	static int earth = 0, moon = 0;
	static point2D_f earthPoint, moonPoint;
	static vector2D_f earthVector, moonVector;
	static matrix2D_f earthMatrix, moonMatrix;

	point2D_f sunOrbit[360], earthOrbit[360];
	float n = 360;

	drawCircle(60, n, { 1, 1, 0.5 });
	glColor3f(1, 0.5, 0);
	drawCircle(60, n);
	glColor3f(0, 0, 0);
	drawCircleAtPoint(sunOrbit, { 0, 0 }, 200, n);

	/*
	if (earth == 0) {
		earthPoint = sunOrbit[earth];
		earthVector = point2D_f_to_vector2D_f(earthPoint);
	} else {
		earthMatrix = rotationMatrix((float) earth);
		earthVector = matrixXvector(earthMatrix, earthVector);
		earthPoint = vector2D_f_to_point2D_f(earthVector);
	}
	*/

	drawCircleAtPoint(sunOrbit[earth], 20, n, { 0, 0.75, 0 });
	glColor3f(0, 0, 0);
	drawCircleAtPoint(sunOrbit[earth], 20, n);
	drawCircleAtPoint(earthOrbit, sunOrbit[earth], 45, n);
	drawCircleAtPoint(earthOrbit[moon], 10, n, { 1, 0.5, 0 });
	glColor3f(0, 0, 0);
	drawCircleAtPoint(earthOrbit[moon], 10, n);

	earth++;
	moon += 3;

	if (earth == 360)
		earth = 0;

	if (moon == 360)
		moon = 0;

	glFlush();
}

void timer(int value) {
	glutPostRedisplay();
	glutTimerFunc(50, timer, 0);
}

/*
	Initialize function of window content
*/
void initialize() {
	glClearColor(1, 1, 1, 1); // Clear window content and replace with some color
	gluOrtho2D(-360, 360, -360, 360); // Create 2D system coordinate
}

int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv); // Initialize glut library
	glutInitWindowSize(720
		, 720); // Initialize application window size
	glutInitWindowPosition(100, 100); // Initialize application window location (0, 0) is define at up-left
	glutCreateWindow("2110151023 - Faza Zulfika Permana Putra"); // Create initialized application window with title

	initialize();
	
	glutDisplayFunc(draw);
	glutTimerFunc(1, timer, 0);
	glutMainLoop();
	
	return 0;
}