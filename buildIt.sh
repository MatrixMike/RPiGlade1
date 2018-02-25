#!/bin/sh
gcc -Wall -g -o testglade1 testglade1.c $(pkg-config --cflags gtk+-3.0) $(pkg-config   --libs gtk+-3.0)

