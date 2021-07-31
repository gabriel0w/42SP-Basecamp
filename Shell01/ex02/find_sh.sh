#!/bin/sh
find . -type f -name "*.sh" | sed "s/.*\///" | awk -F. '{print $1}'
