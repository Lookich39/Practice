#include <stdio.h>
#include <stdlib.h>
int area(int ax,int ay,int bx,int by,int cx,int cy) {
    return abs((by-ay)*(cx-ax)-(bx-ax)*(cy-ay));
}
int main(void)
{
    float ax, ay, bx, by, cx, cy, px, py, s, s1, s2, s3;
    scanf("%f %f", &ax, &ay);
    scanf("%f %f", &bx, &by);
    scanf("%f %f", &cx, &cy);
    scanf("%f %f", &px, &py);

    s = area(ax,ay,bx,by,cx,cy);
    s1 = area(px,py,bx,by,cx,cy);
    s2 = area(px,py,bx,by,ax,ay);
    s3 = area(px,py,ax,ay,cx,cy);
    if (s1+s2+s3-s<=0){
        printf("%s", "YES");
    }
    else{
        printf("%s", "NO");
    }



    return 0;
}
