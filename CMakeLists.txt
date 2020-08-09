cmake_minimum_required(VERSION 3.15)
project(mandelbrot)

set(CMAKE_CXX_STANDARD 11)

add_executable(mandelbrot main.cpp Bitmap.cpp Mandelbrot.cpp Zoom.h ZoomList.cpp FractalCreator.cpp RGB.cpp)