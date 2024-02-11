#!/usr/bin/env bash
cmake -S src -B build && cmake --build build && ./build/ip-conversation-parser
