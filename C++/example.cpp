#include <pybind11/pybind11.h>

/**

Compiling command

c++ -O3 -Wall -shared -std=c++11 -undefined dynamic_lookup
`python3 -m pybind11 --includes` example.cpp -o example`python3-config --extension-suffix`

c++ -O3 -Wall -shared -std=c++11 -undefined dynamic_lookup
`python -m pybind11 --includes` example.cpp -o example.so


*/

int add(int i, int j) {
    return i + j;
}

PYBIND11_MODULE(example, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &add, "A function which adds two numbers");
}