#!/bin/bash

# Run the test cases
echo "Running test cases..."
for test_case in test/*.cpp; do
    g++ -o bin/test ${test_case} src/*.cpp -Iinclude -lwiringPi -lpaho-mqttpp3 -std=c++11
    ./bin/test
    rm -f bin/test
done

echo "Test cases finished."

