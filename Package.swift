import PackageDescription

let package = Package(
    name: "COpenMPI",
    pkgConfig: "ompi-c",
    providers: [
    	.Brew("open-mpi")
    ]
)
