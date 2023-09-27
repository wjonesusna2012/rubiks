#include<def>

void rotateFaceMutable(CubeFace* face, Directionn dir) {
    *face = *face << ((dir + 1) * BitsPerCube) | *face >> (BitsPerFace - (dir + 1) * BitsPerCube);
};

CubeFace rotateFace(CubeFace face, Directionn dir){
    return face << ((dir + 1) * BitsPerCube) | face >> (BitsPerFace - (dir + 1) * BitsPerCube);
};
