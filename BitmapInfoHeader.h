//
// Created by Sachin on 7/28/20.
//

#ifndef MANDELBROT_BITMAPINFOHEADER_H
#define MANDELBROT_BITMAPINFOHEADER_H

#include <cstdint>

using namespace std;
#pragma pack(2)

namespace mandelbrot {
    struct BitmapInfoHeader {
        int32_t headerSize{40};
        int32_t width, height;
        int16_t planes{1};
        int16_t bitsPerPixel{24};
        int32_t compression{0};
        int32_t dataSize{0};
        int32_t horizontalResolution{2400}, verticalResolution{2400};
        int32_t colors{0};
        int32_t importantColors{0};
    };
}

#endif //MANDELBROT_BITMAPINFOHEADER_H
