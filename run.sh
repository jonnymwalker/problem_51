#!/bin/bash
echo "****************"
echo "PYTHON VERSION:"
time python3 problem_51.py

gcc problem_51.c -o problem_51
echo "****************"
echo "C VERSION:"
time ./problem_51
echo "****************"
rm problem_51

