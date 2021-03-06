#!/usr/bin/env bash

echo "run PyBenchmarkTarget tests"
if [ "$1" = "2" ]; then
    docker exec -it --user root s2i /bin/sh -c 'cd ds/PyBenchmarkTarget; python setup.py test'
else
    docker exec -it --user root s2i /bin/sh -c 'cd ds/PyBenchmarkTarget; python3 setup.py test'
fi
if [ "$?" -ne "0" ]
then
    exit -1
fi
