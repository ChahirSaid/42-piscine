#!/bin/bash
ifconfig | grep "ether" | grep -o  ..:..:..:..:..:..
