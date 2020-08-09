//
// Created by Sachin on 7/28/20.
//

#ifndef MANDELBROT_BITMAP_H
#define MANDELBROT_BITMAP_H

#include <string>
#include <cstdint>

using namespace std;

namespace mandelbrot {
    class Bitmap {
    private:
        int m_width{0}, m_height{0};
        unique_ptr<uint8_t[]> m_pPixels{nullptr};
    public:
        Bitmap(int width, int height);

        void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);

        bool write(string filename);

        virtual ~Bitmap() = default;
    };

}


#endif //MANDELBROT_BITMAP_H
