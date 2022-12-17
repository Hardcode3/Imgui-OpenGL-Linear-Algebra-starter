# Imgui & OpenGL template

![Configuration & Build](https://github.com/Hardcode3/Imgui-OpenGL-Linear-Algebra-starter/actions/workflows/configurenbuild.yml/badge.svg?branch=master)
![licence](https://img.shields.io/github/license/Hardcode3/Imgui-OpenGL-Linear-Algebra-starter)
![os support](https://img.shields.io/static/v1?label=Supports&message=Windows|Linux|MacOS&color=<COLOR>)

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
1>    Start 1: imgui_test
1>1/4 Test #1: imgui_test .......................   Passed    0.67 sec
1>    Start 2: eigen_test
1>2/4 Test #2: eigen_test .......................   Passed    0.02 sec
1>    Start 3: glew_glfw_test
1>3/4 Test #3: glew_glfw_test ...................   Passed    0.65 sec
1>    Start 4: glm_test
1>4/4 Test #4: glm_test .........................   Passed    0.04 sec
1>
1>100% tests passed, 0 tests failed out of 4
1>
1>Total Test time (real) =   1.38 sec
```
