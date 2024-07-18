#!/bin/bash

find . -type f -name "*.c" | while read -r file; do

    sed -i 's/[ \t]*$//' "$file"

    dos2unix "$file"

    if [ -n "$(tail -c1 "$file")" ]; then
        echo >>"$file"
    fi
done
