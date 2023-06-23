#/bin/bash

# check build dir
if [ ! -d build ]
then
  mkdir build
fi

# generate cmake files
cmake -O . -B ./build -DCMAKE_BUILD_TYPE=Debug -DBUILD_SHAED_LIBS=0N

# copy assets files to output dir
cp -R "./resource" "./build/bin/assets"

# compile project
cd build && cmake --build .
echo compilation finished