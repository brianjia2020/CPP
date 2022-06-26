#!/bin/bash

search_dir=./source

for entry in "$search_dir"/*
do
  echo "compiling $entry"
  name=$(basename $entry ".cpp")
  clang++ $entry -o  ./output/$name.o
done