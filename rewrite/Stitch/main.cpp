
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>

#include "Array2D.h"
#include "Array3D.h"
#include "Array3DUtils.h"

#include "BBox.h"

#include "HalfEdgeMesh.h"
#include "PolyMesh.h"

int main(int argc, char** argv) {
  PolyMesh pm;
  pm.LoadObj("F:/meshes/stitch/cube5mm2.obj_stmesh.obj");
  std::cout << pm.NumVerts() << " " << pm.NumFaces() << "\n";

  HalfEdgeMesh hem(pm);


  return 0;
}
