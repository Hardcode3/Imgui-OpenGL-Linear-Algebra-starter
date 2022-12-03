# Imgui_with_eigen_template
A basic template cmake project including Imgui graphical user interface (working with GLFW and OpenGL3 backends) and having eigen library included for linear algebra
- [ImGui](external/imgui) is under the MIT licence
- [Eigen](external/eigen) is under the Apach 2.0 Licence, meaning that every changes shoud be mentioned, LICENCE, COPYRIGHTS and NOTICE shouold be clearly visible in the project

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
This repository contains submodules meaning that a recursive cloning should be done.
To clone this repository, make sure you have git installed and clone the project into the chosen folder using 
```
git clone --recursive https://github.com/Hardcode3/Imgui_with_eigen_cmake_template.git
```
This will also clone Eigen from its [GitLab repository](https://gitlab.com/libeigen/eigen) into the project.
CMake integrates it when building, there is nothing else to do.

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

Generating the RUNTESTS executable (CTests) shoud output something like this:
```
1>    Start 1: imgui_test
1>1/2 Test #1: imgui_test .......................   Passed    0.77 sec
1>    Start 2: eigen_test
1>2/2 Test #2: eigen_test .......................   Passed    0.03 sec
```

# Note
This is only a template for very specific projects, feel free to reorganize it as you wish.
It is not meant for pros.
