// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" // Header yang dibuat oleh programmer

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

typedef struct point3D_i {
	int x;
	int y;
	int z;
};

typedef struct point3D_f {
	float x;
	float y;
	float z;
};

typedef struct point3D_d {
	double x;
	double y;
	double z;
};

typedef struct face_t {
	int numberOfVertices;
	short int point[25000];
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

typedef struct vector3D_i
{
	int v[4];
};

typedef struct vector3D_f
{
	float v[4];
};

typedef struct vector3D_d
{
	double v[4];
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

typedef struct object3D_i {
	int numberOfVertices;
	point3D_i point[25000];
	colorARGB_i color[25000];
	int numberOfFaces;
	face_t face[25000];
};

typedef struct object3D_f {
	int numberOfVertices;
	point3D_f point[25000];
	colorARGB_f color[25000];
	int numberOfFaces;
	face_t face[25000];
};

typedef struct object3D_d {
	int numberOfVertices;
	point3D_d point[25000];
	colorARGB_d color[25000];
	int numberOfFaces;
	face_t face[25000];
};

static object3D_f obyek3D;

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

vector3D_i point3D_i_to_vector3D_i(point3D_i point) {
	vector3D_i vector;

	vector.v[0] = point.x;
	vector.v[1] = point.y;
	vector.v[2] = point.z;
	vector.v[3] = 1;

	return vector;
}

vector3D_f point3D_f_to_vector3D_f(point3D_f point) {
	vector3D_f vector;

	vector.v[0] = point.x;
	vector.v[1] = point.y;
	vector.v[2] = point.z;
	vector.v[3] = 1;

	return vector;
}

vector3D_d point3D_d_to_vector3D_d(point3D_d point) {
	vector3D_d vector;

	vector.v[0] = point.x;
	vector.v[1] = point.y;
	vector.v[2] = point.z;
	vector.v[3] = 1;

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

point2D_i vector3D_i_to_point2D_i(vector3D_i vector) {
	point2D_i point;

	point.x = vector.v[0];
	point.y = vector.v[1];

	return point;
}

point2D_f vector3D_f_to_point2D_f(vector3D_f vector) {
	point2D_f point;

	point.x = vector.v[0];
	point.y = vector.v[1];

	return point;
}

point2D_d vector3D_d_to_point2D_d(vector3D_d vector) {
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

void drawGradatePolygon(point2D_f point[], int n, colorRGB_f color[]) {
	int i;

	glBegin(GL_POLYGON);
		for (i = 0; i < n; i++) {
			glColor3f(color[i].r, color[i].g, color[i].b);
			glVertex2f(point[i].x, point[i].y);
		}
	glEnd();
}

void drawGradatePolygon2(point2D_f point[], int n, colorARGB_f color[]) {
	int i;

	glBegin(GL_POLYGON);
	for (i = 0; i < n; i++) {
		glColor3f(color[i].r, color[i].g, color[i].b);
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

	float val = 3.14159 / 180;
	float cs = cos(tetha * val);
	float sn = sin(tetha * val);

	mF.m[0][0] = cs;
	mF.m[1][0] = sn;
	mF.m[0][1] = -sn;
	mF.m[1][1] = cs;

	return mF;
}

matrix2D_f rotationMatrixX(float tetha) {
	matrix2D_f mF = createFloatIdentity();

	float val = 3.14159 / 180;
	float cs = cos(tetha * val);
	float sn = sin(tetha * val);

	mF.m[1][1] = cs;
	mF.m[2][1] = sn;
	mF.m[1][2] = -sn;
	mF.m[2][2] = cs;

	return mF;
}

matrix2D_f rotationMatrixY(float tetha) {
	matrix2D_f mF = createFloatIdentity();

	float val = 3.14159 / 180;
	float cs = cos(tetha * val);
	float sn = sin(tetha * val);

	mF.m[0][0] = cs;
	mF.m[0][2] = sn;
	mF.m[2][0] = -sn;
	mF.m[2][2] = cs;

	return mF;
}

matrix2D_f rotationMatrixZ(float tetha) {
	matrix2D_f mF = createFloatIdentity();

	float val = 3.14159 / 180;
	float cs = cos(tetha * val);
	float sn = sin(tetha * val);

	mF.m[0][0] = cs;
	mF.m[1][0] = sn;
	mF.m[0][1] = -sn;
	mF.m[1][1] = cs;

	return mF;
}

matrix2D_f rotationMatrix(float tetha, point2D_f point) {
	matrix2D_f mF = createFloatIdentity();

	float val = 3.14159 / 180;
	float cs = point.x + (tetha * val);
	float sn = point.y + (tetha * val);

	mF.m[0][0] = cs;
	mF.m[1][0] = sn;
	mF.m[0][1] = -sn;
	mF.m[1][1] = cs;

	return mF;
}

matrix2D_d rotationMatrix(double tetha) {
	matrix2D_d mD = createDoubleIdentity();

	float val = 3.14159 / 180;
	float cs = cos(tetha * val);
	float sn = sin(tetha * val);

	mD.m[0][0] = cs;
	mD.m[1][0] = sn;
	mD.m[0][1] = -sn;
	mD.m[1][1] = cs;

	return mD;
}

matrix2D_d rotationMatrix(double tetha, point2D_d point) {
	matrix2D_d mD = createDoubleIdentity();

	float val = 3.14159 / 180;
	float cs = point.x + (tetha * val);
	float sn = point.y + (tetha * val);

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

vector3D_i vectorMinVector3D(vector3D_i a, vector3D_i b) {
	vector3D_i c;

	c.v[0] = a.v[0] - b.v[0];
	c.v[1] = a.v[1] - b.v[1];
	c.v[2] = a.v[2] - b.v[2];
	c.v[3] = 1;

	return c;
}

vector3D_f vectorMinVector3D(vector3D_f a, vector3D_f b) {
	vector3D_f c;

	c.v[0] = a.v[0] - b.v[0];
	c.v[1] = a.v[1] - b.v[1];
	c.v[2] = a.v[2] - b.v[2];
	c.v[3] = 1;

	return c;
}

vector3D_d vectorMinVector3D(vector3D_d a, vector3D_d b) {
	vector3D_d c;

	c.v[0] = a.v[0] - b.v[0];
	c.v[1] = a.v[1] - b.v[1];
	c.v[2] = a.v[2] - b.v[2];
	c.v[3] = 1;

	return c;
}

vector3D_i vectorCrossVector3D(vector3D_i a, vector3D_i b) {
	vector3D_i c;
	
	c.v[0] = a.v[1] * b.v[2] - a.v[2] * b.v[1];
	c.v[1] = a.v[2] * b.v[0] - a.v[0] * b.v[2];
	c.v[2] = a.v[0] * b.v[1] - a.v[1] * b.v[0];
	c.v[3] = 1;
	
	return c;
}

vector3D_f vectorCrossVector3D(vector3D_f a, vector3D_f b) {
	vector3D_f c;

	c.v[0] = a.v[1] * b.v[2] - a.v[2] * b.v[1];
	c.v[1] = a.v[2] * b.v[0] - a.v[0] * b.v[2];
	c.v[2] = a.v[0] * b.v[1] - a.v[1] * b.v[0];
	c.v[3] = 1;

	return c;
}

vector3D_d vectorCrossVector3D(vector3D_d a, vector3D_d b) {
	vector3D_d c;

	c.v[0] = a.v[1] * b.v[2] - a.v[2] * b.v[1];
	c.v[1] = a.v[2] * b.v[0] - a.v[0] * b.v[2];
	c.v[2] = a.v[0] * b.v[1] - a.v[1] * b.v[0];
	c.v[3] = 1;

	return c;
}

void createGalaxy() {
	static int star = 0;
	static point2D_f starPoint[10];
	static vector2D_f starVector[10];
	static matrix2D_f starMatrix[10];

	if (star == 0) {
		starPoint[0] = { -80, -80 };
		starPoint[1] = { -50, -10 };
		starPoint[2] = { -125, 30 };
		starPoint[3] = { -30, 30 };
		starPoint[4] = { 0, 100 };
		starPoint[5] = { 30, 30 };
		starPoint[6] = { 125, 30 };
		starPoint[7] = { 50, -10 };
		starPoint[8] = { 80, -80 };
		starPoint[9] = { 0, -30 };

		for (int i = 0; i < 10; i++)
			starVector[i] = point2D_f_to_vector2D_f(starPoint[i]);

		star = 1;
	}
	else {
		int i;

		for (i = 0; i < 10; i++)
			starMatrix[i] = rotationMatrix((float)1);

		for (i = 0; i < 10; i++)
			starVector[i] = matrixXvector(starMatrix[i], starVector[i]);

		for (i = 0; i < 10; i++)
			starPoint[i] = vector2D_f_to_point2D_f(starVector[i]);
	}

	//drawFillPolygon(starPoint, 10, { 1, 1, 0 });
	drawPolygon(starPoint, 10);

	//drawRose_colorf(1000, { 1, 0, 0 });
	//drawRose_colorf(100, { 0, 0, 1 });
	//drawRose_colorf(11, { 1, 0, 1 });

	//drawSin();
	//drawCircle(100, 100);

	//drawWatch({ 0, 0 }, 150, 360);
	//drawSinMoveWithPoint();

	static int earth = 0, moon = 0;
	static point2D_f earthPoint, moonPoint, newPoint;
	static vector2D_f earthVector, moonVector;
	static matrix2D_f earthMatrix, moonMatrix;

	point2D_f sunOrbit[360], earthOrbit[360];
	float n = 360;

	//drawCircle(60, n, { 1, 1, 0.5 });
	//draw5PointsStar({ -43, -43 }, { 0, 60 }, { 43, -43 }, { -60, 10 }, { 60, 10 });
	glColor3f(1, 0.5, 0);
	//drawCircle(60, n);
	glColor3f(0, 0, 0);
	drawCircleAtPoint(sunOrbit, { 0, 0 }, 200, n);

	if (earth == 0) {
		earthPoint = sunOrbit[earth];
		earthVector = point2D_f_to_vector2D_f(earthPoint);

		earth = 1;
	}
	else {
		earthMatrix = rotationMatrix((float)1);
		earthVector = matrixXvector(earthMatrix, earthVector);
		earthPoint = vector2D_f_to_point2D_f(earthVector);
	}

	drawCircleAtPoint(earthPoint, 20, n, { 0, 0.75, 0 });
	glColor3f(0, 0, 0);
	drawCircleAtPoint(earthPoint, 20, n);
	drawCircleAtPoint(earthOrbit, earthPoint, 45, n);

	if (moon == 0) {
		moonPoint = earthOrbit[moon];
		moonVector = point2D_f_to_vector2D_f(moonPoint);

		moon = 1;
	}
	else {
		moonMatrix = rotationMatrix((float)1);
		moonVector = matrixXvector(moonMatrix, moonVector);
		moonPoint = vector2D_f_to_point2D_f(moonVector);

		moonPoint.x -= earthPoint.x;
		moonPoint.y -= earthPoint.y;

		moonVector = point2D_f_to_vector2D_f(moonPoint);

		moonMatrix = rotationMatrix((float)4);
		moonVector = matrixXvector(moonMatrix, moonVector);
		moonPoint = vector2D_f_to_point2D_f(moonVector);

		moonPoint.x += earthPoint.x;
		moonPoint.y += earthPoint.y;
	}

	drawCircleAtPoint(moonPoint, 10, n, { 1, 0.5, 0 });
	glColor3f(0, 0, 0);
	drawCircleAtPoint(moonPoint, 10, n);
}

void createGlassWithCover() {
	point2D_f point1[4];

	point1[0] = { -100, 0 };
	point1[1] = { 0, 0 };
	point1[2] = { 0, -150 };
	point1[3] = { -100, -150 };

	colorRGB_f color1[4];

	color1[0] = { 0, 1, 0 };
	color1[1] = { 0, 1, 0.5 };
	color1[2] = { 0, 0.5, 1 };
	color1[3] = { 0, 0, 1 };

	drawGradatePolygon(point1, 4, color1);

	static int cover = 0;
	static float angle = -1;
	static point2D_f point2[4], point3[4], point4[4], point5[4];
	static vector2D_f vector2[4], vector3[4], vector4[4], vector5[4];
	static matrix2D_f matrix2[4], matrix3[4], matrix4[4], matrix5[4];

	if (cover == 0) {
		point2[3] = { -100, 20 };
		point2[2] = { 0, 20 };
		point2[1] = { 0, 0 };
		point2[0] = { -100, 0 };

		point3[0] = { -75, 40 };
		point3[1] = { -25, 40 };
		point3[2] = { -25, 20 };
		point3[3] = { -75, 20 };

		point4[3] = { -100, -150 };
		point4[2] = { 0, -150 };
		point4[1] = { 0, -170 };
		point4[0] = { -100, -170 };

		point5[3] = { -75, -190 };
		point5[2] = { -25, -190 };
		point5[1] = { -25, -170 };
		point5[0] = { -75, -170 };

		for (int i = 0; i < 4; i++) {
			vector2[i] = point2D_f_to_vector2D_f(point2[i]);
			vector3[i] = point2D_f_to_vector2D_f(point3[i]);
			vector4[i] = point2D_f_to_vector2D_f(point4[i]);
			vector5[i] = point2D_f_to_vector2D_f(point5[i]);
		}

		cover = 1;
	}
	else {
		int i;

		for (i = 0; i < 4; i++) {
			if (i != 2) {
				point4[i].x -= point4[2].x;
				point4[i].y -= point4[2].y;
			}

			point5[i].x -= point4[2].x;
			point5[i].y -= point4[2].y;

			vector4[i] = point2D_f_to_vector2D_f(point4[i]);
			vector5[i] = point2D_f_to_vector2D_f(point5[i]);
		}


		for (i = 0; i < 4; i++) {
			matrix2[i] = rotationMatrix(angle);
			matrix3[i] = rotationMatrix(angle);
			matrix4[i] = rotationMatrix(-angle);
			matrix5[i] = rotationMatrix(-angle);
		}

		for (i = 0; i < 4; i++) {
			if (i != 1)
				vector2[i] = matrixXvector(matrix2[i], vector2[i]);

			if (i != 2)
				vector4[i] = matrixXvector(matrix4[i], vector4[i]);

			vector3[i] = matrixXvector(matrix3[i], vector3[i]);
			vector5[i] = matrixXvector(matrix5[i], vector5[i]);
		}

		for (i = 0; i < 4; i++) {
			if (i != 1)
				point2[i] = vector2D_f_to_point2D_f(vector2[i]);

			if (i != 2)
				point4[i] = vector2D_f_to_point2D_f(vector4[i]);

			point3[i] = vector2D_f_to_point2D_f(vector3[i]);
			point5[i] = vector2D_f_to_point2D_f(vector5[i]);
		}

		for (i = 0; i < 4; i++) {
			if (i != 2) {
				point4[i].x += point4[2].x;
				point4[i].y += point4[2].y;
			}

			point5[i].x += point4[2].x;
			point5[i].y += point4[2].y;
		}

		if ((int)point2[0].x == 0)
			angle = 1;

		if ((int)point2[0].y == 0)
			angle = -1;
	}

	drawGradatePolygon(point2, 4, color1);
	drawGradatePolygon(point3, 4, color1);
	drawGradatePolygon(point4, 4, color1);
	drawGradatePolygon(point5, 4, color1);
}

void makeKerucut(object3D_f *kerucut, int n, float h, float r) { 
	float a = 6.28 / n;
	
	kerucut->numberOfVertices = n + 1;
	kerucut->numberOfFaces = n + 1;

	kerucut->point[0].x = 0;
	kerucut->point[0].y = 0;
	kerucut->point[0].z = h;

	kerucut->color[0].a = 1;
	kerucut->color[0].r = 0.5;
	kerucut->color[0].g = 0;
	kerucut->color[0].b = 0;
	
	for (int i = 1; i < kerucut->numberOfVertices; i++) {
		kerucut->point[i].x = r * cos(a * i);
		kerucut->point[i].y = r * sin(a * i);
		kerucut->point[i].z = 0.;

		kerucut->color[i].a = 1;
		kerucut->color[i].r = 1;
		kerucut->color[i].g = 0;
		kerucut->color[i].b = 0;
	}

	for (int i = 0; i < n; i++) {
		kerucut->face[i].numberOfVertices = 3;
		kerucut->face[i].point[0] = 0;

		if (i != (n - 1)) {
			kerucut->face[i].point[1] = i + 1;
			kerucut->face[i].point[2] = i + 2;
		}
		else {
			kerucut->face[i].point[1] = n;
			kerucut->face[i].point[2] = 1;
		}
	}

	kerucut->face[n].numberOfVertices = n;

	int j = n;

	for (int i = 0; i < n; i++) {
		kerucut->face[n].point[i] = j--;
	}
}

void makeDiamond(object3D_f *diamond, int n, float h, float r) {
	float a = 6.28 / n;

	diamond->numberOfVertices = n + 2;
	diamond->numberOfFaces = (2 * n);

	for (int i = 0; i < 2; i++) {
		diamond->point[i].x = 0;
		diamond->point[i].y = 0;

		if (i == 0) {
			diamond->point[i].z = h;
		} else if (i == 1) {
			diamond->point[i].z = -h;
		}

		diamond->color[i].a = 1;
		diamond->color[i].r = 0.5;
		diamond->color[i].g = 0;
		diamond->color[i].b = 0;
	}

	for (int i = 2; i < diamond->numberOfVertices; i++) {
		diamond->point[i].x = r * cos(a * i);
		diamond->point[i].y = r * sin(a * i);
		diamond->point[i].z = 0.;

		diamond->color[i].a = 1;
		diamond->color[i].r = 1;
		diamond->color[i].g = 0;
		diamond->color[i].b = 0;
	}

	for (int i = 0; i < n; i++) {
		diamond->face[i].numberOfVertices = 3;
		diamond->face[i].point[0] = 0;

		if (i != (n - 1)) {
			diamond->face[i].point[1] = i + 2;
			diamond->face[i].point[2] = i + 3;
		} else {
			diamond->face[i].point[1] = (n + 1);
			diamond->face[i].point[2] = 2;
		}
	}

	int j = 0;

	for (int i = n; i < diamond->numberOfFaces; i++) {
		diamond->face[i].numberOfVertices = 3;
		diamond->face[i].point[2] = 1;

		if (i != (diamond->numberOfFaces - 1)) {
			diamond->face[i].point[0] = j + 3;
			diamond->face[i].point[1] = j + 2;
		} else {
			diamond->face[i].point[0] = 2;
			diamond->face[i].point[1] = (n + 1);
		}

		j++;
	}
}

void makeTabung(object3D_f *tabung, int n, float h, float r) {
	float a = 6.28 / n;

	tabung->numberOfVertices = (2 * n);
	tabung->numberOfFaces = n + 2;

	for (int i = 0; i < n; i++) {
		tabung->point[i].x = r * cos(a * i);
		tabung->point[i].y = r * sin(a * i);
		tabung->point[i].z = 0.;

		tabung->color[i].a = 1;
		tabung->color[i].r = 1;
		tabung->color[i].g = 0;
		tabung->color[i].b = 0;
	}

	int j = 0;

	for (int i = n; i < tabung->numberOfVertices; i++) {
		tabung->point[i].x = r * cos(a * j);
		tabung->point[i].y = r * sin(a * j);
		tabung->point[i].z = h;

		tabung->color[i].a = 1;
		tabung->color[i].r = 1;
		tabung->color[i].g = 0;
		tabung->color[i].b = 0;

		j++;
	}

	for (int i = 0; i < n; i++) {
		tabung->face[i].numberOfVertices = 4;

		tabung->face[i].point[0] = i;
		tabung->face[i].point[3] = i + n;

		if (i != (n - 1)) {
			tabung->face[i].point[1] = i + 1;
			tabung->face[i].point[2] = i + (n + 1);
		}
		else {
			tabung->face[i].point[1] = 0;
			tabung->face[i].point[2] = n;
		}
	}

	tabung->face[n].numberOfVertices = n;

	j = (n - 1);

	for (int i = 0; i < n; i++) {
		tabung->face[n].point[i] = j--;
	}

	tabung->face[n + 1].numberOfVertices = n;

	j = n;

	for (int i = 0; i < n; i++) {
		tabung->face[n + 1].point[i] = j++;
	}
}

void makePencil(object3D_f *pencil, int n, float h, float r) {
	float a = 6.28 / n;

	pencil->numberOfVertices = (2 * n) + 1;
	pencil->numberOfFaces = (2 * n) + 1;

	for (int i = 0; i < n; i++) {
		pencil->point[i].x = r * cos(a * i);
		pencil->point[i].y = r * sin(a * i);
		pencil->point[i].z = 0.;

		pencil->color[i].a = 1;
		pencil->color[i].r = 1;
		pencil->color[i].g = 0;
		pencil->color[i].b = 0;
	}

	int j = 0;

	for (int i = n; i < (2 * n); i++) {
		pencil->point[i].x = r * cos(a * j);
		pencil->point[i].y = r * sin(a * j);
		pencil->point[i].z = h;

		pencil->color[i].a = 1;
		pencil->color[i].r = 1;
		pencil->color[i].g = 0;
		pencil->color[i].b = 0;

		j++;
	}

	pencil->point[pencil->numberOfVertices - 1].x = 0;
	pencil->point[pencil->numberOfVertices - 1].y = 0;
	pencil->point[pencil->numberOfVertices - 1].z = (2 * h);

	pencil->color[pencil->numberOfVertices - 1].a = 1;
	pencil->color[pencil->numberOfVertices - 1].r = 0.5;
	pencil->color[pencil->numberOfVertices - 1].g = 0;
	pencil->color[pencil->numberOfVertices - 1].b = 0;

	for (int i = 0; i < n; i++) {
		pencil->face[i].numberOfVertices = 4;

		pencil->face[i].point[0] = i;
		pencil->face[i].point[3] = i + n;

		if (i != (n - 1)) {
			pencil->face[i].point[1] = i + 1;
			pencil->face[i].point[2] = i + (n + 1);
		}
		else {
			pencil->face[i].point[1] = 0;
			pencil->face[i].point[2] = n;
		}
	}

	for (int i = n; i < (2 * n); i++) {
		pencil->face[i].numberOfVertices = 3;

		pencil->face[i].point[0] = pencil->numberOfVertices - 1;

		if (i != ((2 * n) - 1)) {
			pencil->face[i].point[1] = i;
			pencil->face[i].point[2] = i + 1;
		}
		else {
			pencil->face[i].point[1] = i;
			pencil->face[i].point[2] = n;
		}
	}

	pencil->face[pencil->numberOfFaces - 1].numberOfVertices = n;

	j = (n - 1);

	for (int i = 0; i < n; i++) {
		pencil->face[pencil->numberOfFaces - 1].point[i] = j--;
	}
}

void draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0, 0, 0); // Set color of draw

	colorRGB_f color = { 1, 0, 0 };

	//drawCoordinateLines(color, color);
	//drawTrianglei_colorf({ -100, 100 }, { -200, 100 }, { -150, 200 }, { 0, 0, 1 });
	//draw5PointsStari({ 100, 100 }, { 150, 200 }, { 200, 100 }, { 75, 160 }, { 225, 160 });
	//drawRectanglei_colorf({ -100, -100 }, { -200, -200 }, { 1, 0, 1 });
	//drawRectangle2i_colorf({ 30, -30 }, { 200, -30 }, { 200, -300 }, { 30, -300 }, { 0, 1, 1 });

	//point2D_i kotak[4] = {{ 100, 100 }, { 300, 100 }, { 300, 200 }, { 100, 200 }};
	//drawPolygon(kotak, 4);

	/*
		static int go = 0;
		static int number;
		static int randNum[720];
		point2D_f p[720];

		for (int i = 0; i < 720; i++) {
			p[i].x = i;
			p[i].y = randNum[i] * sin(36 * ((i + go) / 57.3));
		}

		if (go == 0 || go % 10 == 0)
			number = rand() % 150 + 1;

		drawPolyline(p, 720);
		go++;

		for (int i = 0; i < 720; i++) {
			if (i == 719)
				randNum[i] = number;
			else
				randNum[i] = randNum[i + 1];
		}

		if (go == 720)
			go = 0;
	*/

	/*
		object3D_f obyek3D = {
			8,
			{{ 150, 150, 0 }, { 0, 150, 150 }, { -150, 150, 0 }, { 0, 150, -150 }, {150, 0, 0}, {0, 0, 150}, {-150, 0, 0}, {0, 0, -150}},
			6,
			{
				{ 4, { 7, 3, 0, 4 } },
				{ 4, { 2, 3, 7, 6 } },
				{ 4, { 5, 6, 7, 4 } }, 
				{ 4, { 0, 3, 2, 1 } }, 
				{ 4, { 0, 1, 5, 4 } }, 
				{ 4, { 1, 2, 6, 5 } }
			}
		};
	*/

		/*object3D_f obyek3D = {
			8,
			{ { 150, 150, 0 },{ 0, 150, 150 },{ -150, 150, 0 },{ 0, 150, -150 },{ 150, 0, 0 },{ 0, 0, 150 },{ -150, 0, 0 },{ 0, 0, -150 } },
			12,
			{ 
				{ 3, { 5, 4, 0 } }, { 3, { 5, 0, 1 } }, { 3, { 5, 1, 2 } }, { 3, { 5, 2, 6 } },
				{ 3, { 0, 3, 1 } }, { 3, { 1, 3, 2 } }, { 3, { 5, 7, 4 } }, { 3, { 6, 7, 5 } },
				{ 3, { 4, 7, 0 } }, { 3, { 7, 3, 0 } }, { 3, { 6, 2, 7 } }, { 3, { 7, 2, 3 } }
			}
		};*/

	//colorRGB_f color3D[] = {
	//	{ 0.25, 0, 0 }, { 0.5, 0, 0 }, { 0.75, 0, 0 }, { 1, 0, 0 }, // Merah
	//	{ 0, 0.25, 0 }, { 0, 0.5, 0 }, { 0, 0.75, 0 }, { 0, 1, 0 }, // Hijau
	//	{ 0, 0, 0.25 }, { 0, 0, 0.5 }, { 0, 0, 0.75 }, { 0, 0, 1 }, // Biru
	//};

	static float theta = 0;
	matrix2D_f tilting = matrixXmatrix(rotationMatrixX(theta), rotationMatrixY(15));
	tilting = matrixXmatrix(tilting, rotationMatrixZ(theta));
	vector3D_f vector[25000];
	point2D_f point2D[25000];
	colorARGB_f colorf[25000];

	for (int i = 0; i < obyek3D.numberOfVertices; i++) { 
		vector2D_f vectorBuff;

		vector[i] = point3D_f_to_vector3D_f(obyek3D.point[i]); 
		vectorBuff = matrixXvector(tilting, { vector[i].v[0], vector[i].v[1], vector[i].v[2] });

		vector[i].v[0] = vectorBuff.v[0];
		vector[i].v[1] = vectorBuff.v[1];
		vector[i].v[2] = vectorBuff.v[2];
	}
	
	for (int i = 0; i < obyek3D.numberOfFaces; i++) {
		vector3D_f vectorBuffer[100];
		int j;
		
		for (j = 0; j < obyek3D.face[i].numberOfVertices; j++)  
			vectorBuffer[j] = vector[obyek3D.face[i].point[j]]; 
		
		vector3D_f normalVector = vectorCrossVector3D(vectorMinVector3D(vectorBuffer[1], vectorBuffer[0]), vectorMinVector3D(vectorBuffer[2], vectorBuffer[0]));
		float normalzi = normalVector.v[2]; // Merupakan sudut pandang pengguna, indeks 0 melihat dari bawah

		if (normalzi > 0) {
			for (j = 0; j < obyek3D.face[i].numberOfVertices; j++) {
				point2D[j] = vector3D_f_to_point2D_f(vector[obyek3D.face[i].point[j]]);
				colorf[j] = obyek3D.color[obyek3D.face[i].point[j]];
			}

			drawPolygon(point2D, obyek3D.face[i].numberOfVertices);
			//drawFillPolygon(point2D, obyek3D.face[i].numberOfVertices, color3D[i]); 
			//drawGradatePolygon2(point2D, obyek3D.face[i].numberOfVertices, colorf);
		}
	}

	theta++;

	glFlush();
}

int readDataFromFile(char *fileName) {
	FILE *file;
	char word[1000];

	int maxVertices, maxFaces;

	int isValid = 1;
	int nol = 0;
	int nos = 0;
	int now = 0;

	errno_t err = fopen_s(&file, fileName, "r");

	if (err != 0) {
		isValid = 0;
		printf("File was not opened\n");
	} else {
		while (1) {
			char c = fgetc(file);

			if (feof(file) || isValid == 0) {
				break;
			}

			if (c == ' ' || c == '\n') {
				if (now > 0) {
					for (int i = now; i < 1000; i++)
						word[i] = NULL;

					float val = atof(word);

					if (nol == 1) {
						if (nos == 0) {
							maxVertices = (int)val;
							obyek3D.numberOfVertices = maxVertices;

							if (maxVertices >= 25000)
							{
								isValid = 0;
							}

							printf("%d ", obyek3D.numberOfVertices);
						}
						else if (nos == 1) {
							maxFaces = (int)val;
							obyek3D.numberOfFaces = maxFaces;

							if (maxFaces >= 25000)
							{
								isValid = 0;
							}

							printf("%d ", obyek3D.numberOfFaces);
						}
					}
					else if ((nol - 1) <= maxVertices) {
						if (nos == 0) {
							obyek3D.point[(nol - 2)].x = val;
							printf("%f ", obyek3D.point[(nol - 2)].x);
						}
						else if (nos == 1) {
							obyek3D.point[(nol - 2)].y = val;
							printf("%f ", obyek3D.point[(nol - 2)].y);
						}
						else if (nos == 2) {
							obyek3D.point[(nol - 2)].z = val;
							printf("%f ", obyek3D.point[(nol - 2)].z);
						}
						else if (nos == 3) {
							obyek3D.color[(nol - 2)].r = (val / 255);
							printf("%f ", obyek3D.color[(nol - 2)].r);
						}
						else if (nos == 4) {
							obyek3D.color[(nol - 2)].g = (val / 255);
							printf("%f ", obyek3D.color[(nol - 2)].g);
						}
						else if (nos == 5) {
							obyek3D.color[(nol - 2)].b = (val / 255);
							printf("%f ", obyek3D.color[(nol - 2)].b);
						}
						else if (nos == 6) {
							obyek3D.color[(nol - 2)].a = (val / 255);
							printf("%f ", obyek3D.color[(nol - 2)].a);
						}
					}
					else if ((nol - (maxVertices + 1)) <= maxFaces) {
						if (nos == 0) {
							obyek3D.face[(nol - (maxVertices + 2))].numberOfVertices = (int)val;
							printf("%d ", obyek3D.face[(nol - (maxVertices + 2))].numberOfVertices);
						}
						else if (nos > 0) {
							obyek3D.face[(nol - (maxVertices + 2))].point[(nos - 1)] = val;
							printf("%d ", obyek3D.face[(nol - (maxVertices + 2))].point[(nos - 1)]);
						}
					}
				}

				if (c == ' ') {
					now = 0;
					nos++;
				}
				else if (c == '\n') {
					printf("\n");

					now = 0;
					nos = 0;
					nol++;
				}
			}
			else {
				switch (nol) {
				case 0:
					printf("%c", c);
					break;
				default:
					word[now] = c;
					now++;
					break;
				}
			}
		}

		fclose(file);
	}

	return isValid;
}

int writeDataToFile(char *fileName, object3D_f *object3D) {
	FILE *file;
	char word[1000];

	int maxVertices, maxFaces;

	int isValid = 1;
	int nol = 0;
	int nos = 0;
	int now = 0;

	errno_t err = fopen_s(&file, fileName, "w");

	if (err != 0) {
		isValid = 0;
		printf("File was not opened\n");
	} else {
		fprintf(file, "COFF \n");
		fprintf(file, "%d %d 0 \n", object3D->numberOfVertices, object3D->numberOfFaces);

		for (int i = 0; i < object3D->numberOfVertices; i++) {
			int r = object3D->color[i].r * 255;
			int g = object3D->color[i].g * 255;
			int b = object3D->color[i].b * 255;
			int a = object3D->color[i].a * 255;

			fprintf(file, "%f %f %f ", object3D->point[i].x, object3D->point[i].y, object3D->point[i].z);
			fprintf(file, "%d %d %d %d \n", r, g, b, a);
		}

		for (int i = 0; i < object3D->numberOfFaces; i++) {
			fprintf(file, "%d ", object3D->face[i].numberOfVertices);

			for (int j = 0; j < object3D->face[i].numberOfVertices; j++) {
				fprintf(file, "%d ", object3D->face[i].point[j]);
			}

			fprintf(file, "\n");
		}

		fclose(file);
	}

	return isValid;
}

void timer(int value) {
	glutPostRedisplay();
	glutTimerFunc(10, timer, 0);
}

/*
	Initialize function of window content
*/
void initialize() {
	glClearColor(1, 1, 1, 1); // Clear window content and replace with some color
	gluOrtho2D(-360, 360, -360, 360); // Create 2D system coordinate
	//gluOrtho2D(0, 720, -360, 360);
}

int main(int iArgc, char** cppArgv) {
	//int isValid = readDataFromFile("G:/Materi Semester 5/Grafika Komputer/off14/off14/faza.off");

	//makeKerucut(&obyek3D, 100, 200, 100);
	//makeDiamond(&obyek3D, 1000, 200, 100);
	makeTabung(&obyek3D, 100, 200, 100);
	//makePencil(&obyek3D, 60, 150, 100);
	
	//int isValid = writeDataToFile("G:/Materi Semester 5/Grafika Komputer/off14/off14/faza.off", &obyek3D);

	int isValid = 1;

	if (isValid) {
		for (int i = 0; i < obyek3D.numberOfVertices; i++) {
			/*obyek3D.point[i].x *= 100;
			obyek3D.point[i].y *= 100;
			obyek3D.point[i].z *= 100;*/

			printf("x = %f \t", obyek3D.point[i].x);
			printf("y = %f \t", obyek3D.point[i].y);
			printf("z = %f \n", obyek3D.point[i].z);
		}

		glutInit(&iArgc, cppArgv); // Initialize glut library
		glutInitWindowSize(720, 720); // Initialize application window size
		glutInitWindowPosition(100, 100); // Initialize application window location (0, 0) is define at up-left
		glutCreateWindow("2110151023 - Faza Zulfika Permana Putra"); // Create initialized application window with title

		initialize();

		glutDisplayFunc(draw);
		glutTimerFunc(1, timer, 0);
		glutMainLoop();
	} else {
		printf("\n\n");
		printf("Tidak dapat ditampilkan, karena melebihi memori yang disediakan");
		printf("\n\n");
	}

	return 0;
}