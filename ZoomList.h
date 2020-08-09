//
// Created by Sachin on 8/9/20.
//

#ifndef MANDELBROT_ZOOMLIST_H
#define MANDELBROT_ZOOMLIST_H

namespace mandelbrot {
    class ZoomList {
    private:
        int m_width{0};
        int m_heigth{0};
    public:
        ZoomList(int width, int height);
    };

}


#endif //MANDELBROT_ZOOMLIST_H
