#include "vec3.h"

vec3_t vec3_add(vec3_t a, vec3_t b) {
    vec3_t r = {a.x + b.x, a.y + b.y, a.z + b.z};
    return r;
}

vec3_t vec3_sub(vec3_t a, vec3_t b) {
    vec3_t r = {a.x - b.x, a.y - b.y, a.z - b.z};
    return r;
}

double vec3_dot(vec3_t a, vec3_t b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

vec3_t vec3_cross(vec3_t a, vec3_t b) {
    vec3_t r = {
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
    return r;
}
