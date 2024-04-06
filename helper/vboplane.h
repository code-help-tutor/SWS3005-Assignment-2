WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef VBOPLANE_H
#define VBOPLANE_H

#include "drawable.h"

class VBOPlane : public Drawable
{
private:
    unsigned int vaoHandle;
    int faces;

public:
    VBOPlane(float xsize, float zsize, int xdivs, int zdivs, float smax = 1.0f, float tmax = 1.0f);

    void render() const;
};

#endif // VBOPLANE_H
