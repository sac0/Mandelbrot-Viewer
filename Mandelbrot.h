//
// Created by Sachin on 8/9/20.
//

#ifndef MANDELBROT_MANDELBROT_H
#define MANDELBROT_MANDELBROT_H

namespace mandelbrot {
    class Mandelbrot {

    public:
        static const int MAX_ITERATIONS = 1000;
    public:
        Mandelbrot();

        virtual  ~Mandelbrot() = default;

        static int getIterations(double x, double y);

    };

}


#endif //MANDELBROT_MANDELBROT_H
