#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 1;

    for (int i = 0; i < n; i++) {
        int dot[4][3];
        for (int j = 0; j < 4; j++) {
            scanf("%d %d %d", &dot[j][0], &dot[j][1], &dot[j][2]);
        }
        int res[3];
        int found = 0;
        for (int j = 1; j < 4; j++) {
            if (dot[0][0] != dot[j][0] || dot[0][1] != dot[j][1] || dot[0][2] != dot[j][2]) {
                res[0] = dot[j][0] - dot[0][0];
                res[1] = dot[j][1] - dot[0][1];
                res[2] = dot[j][2] - dot[0][2];
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Case #%d: Yes\n", cnt++);
            continue;
        }

        int check = 1;
        for (int j = 2; j < 4; j++) {
            int temp[3];
            temp[0] = dot[j][0] - dot[0][0];
            temp[1] = dot[j][1] - dot[0][1];
            temp[2] = dot[j][2] - dot[0][2];
            int cross1 = res[1] * temp[2] - res[2] * temp[1];
            int cross2 = res[2] * temp[0] - res[0] * temp[2];
            int cross3 = res[0] * temp[1] - res[1] * temp[0];

            if (cross1 != 0 || cross2 != 0 || cross3 != 0) {
                check = 0;
                break;
            }
        }

        if (check)
            printf("Case #%d: Yes\n", cnt++);
        else
            printf("Case #%d: No\n", cnt++);
    }

    return 0;
}
