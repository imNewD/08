#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

#endif
/* 
#include <stdio.h>
#include "ft_point.h" 

int main() {
   
    t_point point1;

    point1.x = 10;
    point1.y = 20;

 
    printf("Point1 coordinates: (%d, %d)\n", point1.x, point1.y);

   
    t_point point2 = {30, 40};


    printf("Point2 coordinates: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
*/