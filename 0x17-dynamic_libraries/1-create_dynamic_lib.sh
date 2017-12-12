#!/bin/bash
gcc -Wall -fPIC -c *.fPIC
gcc -shared -o liball.so *.o
