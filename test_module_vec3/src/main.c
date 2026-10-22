#include <stdio.h>
#include "vec3.h"

int main(void) {
    vec3_t a = {1, 2, 3};
    vec3_t b = {4, 5, 6};

    vec3_t s = vec3_add(a, b);
    vec3_t d = vec3_sub(a, b);
    double dot = vec3_dot(a, b);
    vec3_t c = vec3_cross(a, b);

    printf("a + b   = (%.2f, %.2f, %.2f)\n", s.x, s.y, s.z);
    printf("a - b   = (%.2f, %.2f, %.2f)\n", d.x, d.y, d.z);
    printf("a . b   = %.2f\n", dot);
    printf("a x b   = (%.2f, %.2f, %.2f)\n", c.x, c.y, c.z);
    return 0;
}
