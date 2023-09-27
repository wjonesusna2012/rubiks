enum CubeColors: uchar {
    red,
    white,
    blue,
    yellow,
    orange,
    green
};

enum Directions: uchar {
    cw, // 90 degrees clockwise
    cwcw, // 180 degees
    ccw, // 270 degrees clockwise or 90 degrees counter clockwise
};
/*
 * A face will be encoded looking at it from the user's perspective
 * such that the first 3 bits will be the topLeft, next 3 will be
 * the top middle proceeding clockwise.
 */
const uint32_t TopLeftMask { 0b111 };
const uint32_t TopMiddleMask { 0b111 << 3 };
const uint32_t TopRightMask { 0b111 << 6 };
const uint32_t MiddleRightMask { 0b111 << 9 };
const uint32_t BottomRightMask { 0b111 << 12 };
const uint32_t BottomMiddleMask { 0b111 << 15 };
const uint32_t BottomLeftMask { 0b111 << 18 };
const uint32_t MiddleLeftMask { 0b111 << 21 };
const uint32_t MiddleMiddleMask { 0b111 << 24 };

typedef uint32 CubeFace;

const uchar BitsPerCube = { 3 };
const uchar BitsPerFace = { 24 };


