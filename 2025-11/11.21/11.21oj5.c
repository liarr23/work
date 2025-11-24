#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int round_x, round_y, round_r;
    int point_x1, point_y1, point_x2, point_y2;
    
    while(scanf("%d%d%d%d%d%d%d", &round_x, &round_y, &round_r, &point_x1, &point_y1, &point_x2, &point_y2) == 7)
    {
        double distance;
        
    
        if(point_x1 == point_x2)
        {
            distance = fabs(point_x1 - round_x);
        }
        else
        {
            
            double k = (1.0 * point_y1 - point_y2) / (point_x1 - point_x2);
            double b = point_y1 - k * point_x1;
            
            
            distance = fabs(k * round_x - round_y + b) / sqrt(k * k + 1);
        }
        
        
        if(fabs(distance - round_r) < 1e-9)
        {
            printf("1\n"); 
        }
        else if(distance < round_r)
        {
            printf("2\n"); 
        }
        else
        {
            printf("0\n");  
        }
    }
    return 0;
}