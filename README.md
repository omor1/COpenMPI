# COpenMPI
This is a [Swift Package Manager](https://github.com/apple/swift-package-manager) package for [Open MPI](https://www.open-mpi.org).

The package exports a single module, `CMPI`.

Due to the use of function-like macros in `mpi.h`, a shim header that wraps these is required. `shim.h` creates inline functions for the constants and maps them to read-only global computed properties.

A simple MPI program (à la '[Hello World](http://mpitutorial.com/tutorials/mpi-hello-world/)') appears to work correctly, but this has not been extensively tested. Feedback is requested!
