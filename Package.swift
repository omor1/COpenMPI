// swift-tools-version:5.0

/*
 * This file is part of COpenMPI.
 *
 * COpenMPI is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * COpenMPI is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with COpenMPI.  If not, see <http://www.gnu.org/licenses/>.
 */

import PackageDescription

let package = Package(
  name: "COpenMPI",
  products: [
    .library(
      name: "COpenMPI",
      targets: ["CMPI"]
    ),
    .executable(
      name: "COpenMPI-Example",
      targets: ["COpenMPI-Example"]
    )
  ],
  targets: [
    .systemLibrary(
      name: "CMPI",
      pkgConfig: "ompi-c",
      providers: [
        .brew(["open-mpi"])
      ]
    ),
    .target(
      name: "COpenMPI-Example",
      dependencies: [
        "CMPI"
      ]
    )
  ]
)
