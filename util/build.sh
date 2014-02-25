#!/bin/bash
#
cd ..;
make remove; make; 
cd util;
./run_tests.sh;
../bin/main
