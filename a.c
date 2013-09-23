//
// a sphere : center=(0,0,0)
// radius is variable.
// Does exist a radius which makes lattice points number(in the sphere) is exactly 1 billion ?
// maybe not.
//
// result of this program.
//
// 620.3499012654067428230; 999996537
// 620.3499012654067428230; 999996537
// 620.3499012654067428230; 999996537
// 620.3499012654067428230; 999996537
// 620.3499012654067428230; 999996537
// 620.3499012654067428230; 999996537
// 620.3499012654068565098; 1000003353
// 620.3499012654068565098; 1000003353
// 620.3499012654068565098; 1000003353
// 620.3499012654068565098; 1000003353
//

#include <stdio.h>
#include <math.h>


int main(int argc, char* argv[]) {
    long x,y,z;
    long counter = 0;
    double startlen = 620.3499012654067,len;
    double step = 0.00000000000001;
    int stepnum;
    for(stepnum=0; stepnum<10; stepnum++) {
        len = startlen + (step*stepnum);
        for(x = -floor(fabs(len)); x<=len; x++) {
            for(y = -floor(fabs(len)); y<=len; y++) {
                for(z = -floor(fabs(len)); z<=len; z++) {
                    if(x*x + y*y + z*z <= len*len)
                    {
                        counter++;
                    }
                }
            }
        }
        printf("%.19f; %ld\n", len, counter);
        counter = 0;
    }
    return 0;
}
