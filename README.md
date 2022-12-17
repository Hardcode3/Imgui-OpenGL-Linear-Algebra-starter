# Imgui & OpenGL template
A template project using [Imgui](external/imgui) as graphical user interface ([glfw](external/glfw), [glm](external/glm), [glew](external/glew) and OpenGL), and [Eigen3](external/eigen) as linear algebra library.
For more details about the Apach 2.0 licence, visit [tldrlegal.com](https://tldrlegal.com/license/apache-license-2.0-(apache-2.0)).
For more details about the MIT licence, visit [tldrlegal.com](https://tldrlegal.com/license/mit-license)

# Structure
An organized structure has been chosen for this template.
- [cmake](cmake) contains a configure file to get the minor and major versions of the current project.
- [external](external) code goes into external folder at the root of the project.
- [include](include) gather every self written header file.
- [mains](mains) contains the main executable i.e. cpp file that drives all the project.
- [src](src) gather every self written cpp file of the project.
- [tests](tests) uses CTests to use a test driven approach during the development of the project.

# Cloning
This repository contains submodules meaning that a recursive cloning can be done.
To clone this repository, make sure you have git installed and clone the project into the chosen folder using 
```
git clone --recursive https://github.com/Hardcode3/Imgui_with_eigen_cmake_template.git
```
If no recursive statement, cmake updated the module and clones it.

# Configuring and generating
Make sure you have CMake installed and inside the clone repo, type:
```
mkdir build
cd build
cmake ..
cmake --build .
```
Or use CMakeGui for this.
For more details, check [cmake.org](https://cmake.org/)

Generating the RUNTESTS executable (CTests) should output something like this if everything is well configured:
```
2>    Start 1: imgui_test
2>1/3 Test #1: imgui_test .......................   Passed    0.73 sec
2>    Start 2: eigen_test
2>2/3 Test #2: eigen_test .......................   Passed    0.02 sec
2>    Start 3: glew_glfw_test
2>3/3 Test #3: glew_glfw_test ...................   Passed    0.64 sec
2>
2>100% tests passed, 0 tests failed out of 3
2>
2>Total Test time (real) =   1.40 sec
```
