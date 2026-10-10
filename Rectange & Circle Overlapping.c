#include <stdio.h>
#include<math.h>
bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2)
{
    int xa, yb; // point which I will check
    double d;
    int x, y;
    // finding xa
    if (xCenter < x1)
    {
        xa = x1;
    }
    else if (xCenter > x2)
    {
        xa = x2;
    }
    else
        xa = xCenter;
    // finding yb
    if (yCenter < y1)
    {
        yb = y1;
    }
    else if(yCenter > y2)
    {
        yb = y2;
    }
    else
        yb = yCenter;
 //Calculate distance now
    x = xa - xCenter;
    y = yb - yCenter;
    d = sqrt(pow(x, 2) + pow(y, 2));
 //Boolean Check
    if(d <= radius)
    {
        return true;
    }
    else
        return false;
}   