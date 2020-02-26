#!/bin/bash
mkdir "$3"
find "$1" -name "*.$2" -exec cp --parent {} "$3" \; 
tar -czf $4 $3
echo "done"
