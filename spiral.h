// PROGRAMMING KNOWLEDGE

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#define PI 3.14
//centerX - center of the spiral at X point
//centerY - center of the spiral at Y point
//radius - distance from the origin to the outer curve
//sides - number of sides that spiral has
//coils - number of full rotations
//rotation - (0 - no rotation), (1 - 360 rotation)
void SetBlockDisposition(float centerX, float centerY, float radius, float sides, float coils, float rotation)
{
    float awayStep = radius/sides;
    float aroundStep = coils/sides;// 0 to 1 based.
    float aroundRadians = aroundStep * 2 * PI;
    rotation *= 2 * PI;
    for(int i=1; i<=sides; i++){

	float away = i * awayStep;
	float around = i * aroundRadians + rotation;
	float x = centerX + cos(around) * away;
	float y = centerY + sin(around) * away;

	 putpixel(x,y,3);
    }
}

void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");


SetBlockDisposition(250,250,200,50,3,1);

getch();
closegraph();
}
