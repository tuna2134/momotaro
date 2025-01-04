#!/bin/bash
echo "build momotaro"
mkdir -p out
cd out
cmake ..
cd ..
cmake --build out
cp ./out/baby ./
tar -cvf momo.tar baby
echo "done"