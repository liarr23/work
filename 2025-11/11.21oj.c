#include<stdio.h>
int main()
{
    int W, N;
    while(scanf("%d", &W) != EOF)  
    {
        scanf("%d", &N);
        long long total_area = 0;
        
        for(int i = 0; i < N; i++)
        {
            int w, l;
            scanf("%d %d", &w, &l);
            total_area += (long long)w * l;
        }
        
        int L = total_area / W;
        if(total_area % W != 0)
        {
            L++;
        }
        
        printf("%d\n", L);
    }
    return 0;
}