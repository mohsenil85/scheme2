#!/bin/bash
#
cd ..;
echo "start tests..."
for i in `ls test`; do
  echo "testing $i..."
  gcc test/$i; 
  ./a.out; 
  rm a.out;
done
echo "end tests..."
cd util;
