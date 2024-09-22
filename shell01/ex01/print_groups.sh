#!/bin/bash
id -Gn  $FT_USER	 | TR ' ' ',' | tr -d '\n'
