#!/bin/bash

cmake -B ./build/

cmake --build ./build

executable=$(ls ./bin)

./bin/${executable}
