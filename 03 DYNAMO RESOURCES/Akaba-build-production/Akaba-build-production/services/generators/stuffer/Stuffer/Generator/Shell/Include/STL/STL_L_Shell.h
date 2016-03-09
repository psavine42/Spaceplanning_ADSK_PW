#pragma once

const char* raw_STL_L_Shell(R"(
solid Home
facet normal 0 -1 0
outer loop
vertex 70 40 101.5
vertex 70 40 157.5
vertex 30 40 101.5
endloop
endfacet
facet normal 0 -1 0
outer loop
vertex 30 40 101.5
vertex 70 40 157.5
vertex 30 40 157.5
endloop
endfacet
facet normal 0 -1 0
outer loop
vertex 70 60 157.5
vertex 30 60 157.5
vertex 70 40 157.5
endloop
endfacet
facet normal 0 -1 0
outer loop
vertex 70 40 157.5
vertex 30 60 157.5
vertex 30 40 157.5
endloop
endfacet
facet normal 0 -1 0
outer loop
vertex 30 40 157.5
vertex 30 60 157.5
vertex 30 40 101.5
endloop
endfacet
facet normal 0 -1 0
outer loop
vertex 30 40 101.5
vertex 30 60 157.5
vertex 30 60 0
endloop
endfacet
facet normal 0 0 1
outer loop
vertex 30 40 101.5
vertex 30 60 0
vertex 30 40 0
endloop
endfacet
facet normal 0 0 1
outer loop
vertex 70 60 157.5
vertex 70 60 0
vertex 30 60 157.5
endloop
endfacet
facet normal 0 0 1
outer loop
vertex 30 60 157.5
vertex 70 60 0
vertex 30 60 0
endloop
endfacet
facet normal 0 0 1
outer loop
vertex 70 40 101.5
vertex 30 40 101.5
vertex 70 0 101.5
endloop
endfacet
facet normal 0 0 1
outer loop
vertex 70 0 101.5
vertex 30 40 101.5
vertex 0 0 101.5
endloop
endfacet
facet normal 0 0 1
outer loop
vertex 0 0 101.5
vertex 30 40 101.5
vertex 0 40 101.5
endloop
endfacet
facet normal -1 0 0
outer loop
vertex 30 60 0
vertex 70 60 0
vertex 30 40 0
endloop
endfacet
facet normal -1 0 0
outer loop
vertex 30 40 0
vertex 70 60 0
vertex 70 0 0
endloop
endfacet
facet normal -1 0 0
outer loop
vertex 30 40 0
vertex 70 0 0
vertex 0 0 0
endloop
endfacet
facet normal -1 0 0
outer loop
vertex 0 0 0
vertex 0 40 0
vertex 30 40 0
endloop
endfacet
facet normal -1 0 0
outer loop
vertex 0 0 101.5
vertex 0 0 0
vertex 70 0 101.5
endloop
endfacet
facet normal -1 0 0
outer loop
vertex 70 0 101.5
vertex 0 0 0
vertex 70 0 0
endloop
endfacet
facet normal -1 0 0
outer loop
vertex 0 40 101.5
vertex 0 40 0
vertex 0 0 101.5
endloop
endfacet
facet normal -1 0 0
outer loop
vertex 0 0 101.5
vertex 0 40 0
vertex 0 0 0
endloop
endfacet
facet normal -1 0 0
outer loop
vertex 30 40 101.5
vertex 30 40 0
vertex 0 40 101.5
endloop
endfacet
facet normal 0 1 0
outer loop
vertex 0 40 101.5
vertex 30 40 0
vertex 0 40 0
endloop
endfacet
facet normal 0 1 0
outer loop
vertex 70 0 101.5
vertex 70 0 0
vertex 70 40 101.5
endloop
endfacet
facet normal 0 1 0
outer loop
vertex 70 40 101.5
vertex 70 0 0
vertex 70 60 0
endloop
endfacet
facet normal 0 1 0
outer loop
vertex 70 40 101.5
vertex 70 60 0
vertex 70 60 157.5
endloop
endfacet
facet normal 0 1 0
outer loop
vertex 70 60 157.5
vertex 70 40 157.5
vertex 70 40 101.5
endloop
endfacet
endsolid Home
)");

string STL_L_Shell(raw_STL_L_Shell);