#!/bin/sh

find . -type f -name '*.sh' | sed 's/\.sh//g' | sed -r 's/\.\/(.*\/)?//'