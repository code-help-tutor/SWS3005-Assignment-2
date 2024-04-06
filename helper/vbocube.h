WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef VBOCUBE_H
#define VBOCUBE_H

#include "drawable.h"

class VBOCube : public Drawable
{

private:
    unsigned int vaoHandle;

public:
    VBOCube();

	void render() const;
};

#endif // VBOCUBE_H
