//
// Created by Sachin on 7/28/20.
//

#ifndef MANDELBROT_BITMAPFILEHEADR_H
#define MANDELBROT_BITMAPFILEHEADR_H

#include <cstdint>

using namespace std;

#pragma pack(2)

namespace mandelbrot {
    struct BitmapFileHeader {
        char header[2]{'B', 'M'};
        int32_t fileSize;
        int32_t reserved{0};
        int32_t dataOffset;
    };
}

#endif //MANDELBROT_BITMAPFILEHEADR_H
