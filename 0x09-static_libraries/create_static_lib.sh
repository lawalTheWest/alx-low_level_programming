#!/bin/bash
gcc -c *.c
ar ar liball.a *.o
ranlib liball.a
