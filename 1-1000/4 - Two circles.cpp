#include <bits/stdc++.h>
using namespace std;

#define INF 1e-9

int main() {
    double x1, y1, r1, x2, y2, r2;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    double dx = x2 - x1;
    double dy = y2 - y1;
    double dist2 = dx*dx + dy*dy;  
    double rsum = r1 + r2;
    double rdiff = fabs(r1 - r2);
    int res;

    if (dist2 < INF && fabs(r1 - r2) < INF) {
        res = -1; 
    } else if (fabs(dist2 - rsum*rsum) < INF || fabs(dist2 - rdiff*rdiff) < INF) {
        res = 1; 
    } else if (dist2 > rsum*rsum + INF || dist2 < rdiff*rdiff - INF) {
        res = 0; 
    } else {
        res = 2;  
    }

    printf("%d\n", res);
}
