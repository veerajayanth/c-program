#include<stdio.h>
#include<stdlib.h>

struct Rectangle
{
	int length;
	int breadth;
};

void main()
{
	struct Rectangle* ptr;
	ptr = (struct Rectangle*)malloc(sizeof(struct Rectangle));
	ptr->length = 10;
	ptr->breadth = 20;
	printf("Area of rectangle is: %d", ptr->length * ptr->breadth);
	return 0;
}