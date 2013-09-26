/*
 *  GLMatrixMath.h
 *  Bricksmith
 *
 *  Created by bsupnik on 9/24/13.
 *  Copyright 2013 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef GLMatrixMath_H
#define GLMatrixMath_H

#include <OpenGL/gl.h>

//
//	GLMatrixMath
//
//	These APIs operate directly on 16-float column-major matrices, that is, OpenGL's matrix format of choice; they
//	are used to emulate fixed function behavior.



// Apply matrix transform ot input vec4.
void applyMatrix(GLfloat dst[4], const GLfloat m[16], const GLfloat v[4]);

// Apply perspective divide to homogeneous vec4.
void perspectiveDivide(GLfloat p[4]);

// Apply transpose(M) to vec4.
void applyMatrixTranspose(GLfloat dst[4], const GLfloat m[16], const GLfloat v[4]);

// Compose two 4x4 matrices (e.g. dst = a * b.
void multMatrices(GLfloat dst[16], const GLfloat a[16], const GLfloat b[16]);


// These routines build the matrices that are normally built for you via the 
// OpenGL fixed funtion transform stack.  Function arguments match their
// OpenGL counterparts.
void buildRotationMatrix(GLfloat m[16], GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
void buildTranslationMatrix(GLfloat m[16], GLfloat x, GLfloat y, GLfloat z);
void buildIdentity(GLfloat m[16]);
void buildOrthoMatrix(GLfloat m[16], GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
void buildFrustumMatrix(GLfloat m[16], GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);

void applyRotationMatrix(GLfloat m[16], GLfloat angle, GLfloat x, GLfloat y, GLfloat z);

#endif
