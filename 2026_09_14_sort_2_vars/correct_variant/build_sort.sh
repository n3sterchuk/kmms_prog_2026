#!/usr/bin/env bash
set -eu

cd "$(dirname "$0")"

compiler="${CXX:-g++}"
executable="my_correct_sort"

"$compiler" io.cpp sortings.cpp main.cpp -o "$executable"
exec "./$executable"