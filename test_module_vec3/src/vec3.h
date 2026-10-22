#ifndef VEC3_H
#define VEC3_H

typedef struct {
    double x, y, z;
} vec3_t;

vec3_t vec3_add(vec3_t a, vec3_t b);
vec3_t vec3_sub(vec3_t a, vec3_t b);
double vec3_dot(vec3_t a, vec3_t b);
vec3_t vec3_cross(vec3_t a, vec3_t b);

#endif
