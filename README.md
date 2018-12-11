# CMake Templates

This repository provides small [CMake](https://cmake.org/) templates usable for starting projects with
a multipurpose build system. All projects are commented and serve as
examples on how to pierce CMake's complex learning curve for beginners and just
get to the exciting part: Writing C/C++ code.

# Included Templates

## SDL2 Template

This template sets up the [Simple Direct Media Library 2](https://www.libsdl.org/download-2.0.php)
to be linked with your C/C++ code. Using this library, you can easily display graphics and
build small games that can run (basically) everywhere. 

## Console Project

The console project sets up a most basic CMake template for use with console
applications. You can start writing your programs using this basic framework and scale
them easily to multiple source files or external dependencies.

# Advantages gained by using CMake

  1. Easy IDE integration: You can use IDEs like [Qt Creator](https://www.qt.io/download), Code::Blocks, Visual Studio, VS Code, or
     even Emacs or Vim seamlessly with CMake. 
  2. Multi-platform by default: Building on/for Windows, Linux, Mac OS or the BSDs gets easier and can be managed.
  3. Project organisation and modular application development: By splitting your code up into multiple files and libraries, the application can
     be developed more efficiently and you won't lose control as easily as without any organisation.

